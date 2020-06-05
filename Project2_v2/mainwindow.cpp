#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "course.h"
#include "scheduler.h"
#include <QString>
#include "classroom.h"
#include "compulsoryCourse.h"
#include "electiveCourse.h"
#include "content.h"
#include "service.h"
#include "busy.h"
#include<iostream>
#include<string.h>
#include <vector>
#include <QTableWidget>
#include <QColor>

using namespace std;


classroom myClassroom;
busy myBusy;
compulsaryCourse myCompulsaryCourse;
electiveCourse myElectiveCourse;
service myService;
content myContent;

vector<classroom> vector_classroom = myClassroom.readCsv();
vector<busy> vector_busy = myBusy.readCsv();
vector<course> vector_compulsaryCourse = myCompulsaryCourse.readCsv();
vector<course> vector_electiveCourse = myElectiveCourse.readCsv();
vector<service> vector_service = myService.readCsv();

int bigClassSize = vector_classroom[0].getAmount();
int smallClassSize = vector_classroom[1].getAmount();
int availableClassSize = bigClassSize + smallClassSize;
int serviceSize = vector_service.size();
int compulsorySize = vector_compulsaryCourse.size();
int electiveSize = vector_electiveCourse.size();
int courseSize = electiveSize + compulsorySize;
int busySize = vector_busy.size();


vector<vector<content>> mainVector(5, vector<content>(availableClassSize*2));
int counter = 0;
int buttonCounter = 0;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initTableWidget();
    fillCombobox();
    ui->TextOutput->setReadOnly(true);
    ui->tabWidget->setStyleSheet("background-color: #f5fff8");
    ui->comboBoxCode->setStyleSheet("background-color: #ffffff ; color: rgb(0, 152, 152);");
    ui->comboBoxDay->setStyleSheet("background-color: #ffffff ; color: rgb(0, 152, 152);");
    ui->comboBoxTime->setStyleSheet("background-color: #ffffff ; color: rgb(0, 152, 152);");
    ui->comboBoxBig->setStyleSheet("background-color: #ffffff ; color: rgb(0, 152, 152);");
    ui->comboBoxSmall->setStyleSheet("background-color: #ffffff ; color: rgb(0, 152, 152);");
    ui->ButtonPrint->setStyleSheet("background-color: #ffffff ; color: rgb(0, 152, 152);");
    ui->ButtonDisplay->setStyleSheet("background-color: #ffffff ; color: rgb(0, 152, 152);");
    ui->pushButton_4->setStyleSheet("background-color: #ffffff ; color: rgb(0, 152, 152);");
    ui->pushButton_2->setStyleSheet("background-color: #ffffff ; color: rgb(0, 152, 152);");
    ui->pushButton_3->setStyleSheet("background-color: #ffffff ; color: rgb(0, 152, 152);");
    ui->TextOutput->setStyleSheet("background-color: #ffffff ; color: rgb(0, 152, 152);");


    QAction *helpAction = ui->menubar->addAction("Exit");
    connect(helpAction, SIGNAL(triggered()), this, SLOT(help()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
//THIS IS THE START OF ALGORITHM FUNCTIONS@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

inline int dayToNum(string day){
    if(day == "Monday") return 0;
    else if(day == "Tuesday") return 1;
    else if(day == "Wednesday") return 2;
    else if(day == "Thursday") return 3;
    else if(day == "Friday") return 4;
}

inline string numToDay(int day){
    if(day == 0) return "Monday";
    else if(day == 1) return "Tuesday";
    else if(day == 2) return "Wednesday";
    else if(day == 3) return "Thursday";
    else if(day == 4) return "Friday";
}

void display() {
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < availableClassSize*2; j++){
            cout<<mainVector[i][j].getCode()<< " "<< mainVector[i][j].getDay() << " " << mainVector[i][j].getTime() <<endl;
        }
    }
    cout << counter << endl;
    if(courseSize > counter){
        cout << "There is no way to make a perfect schedule, not enough empty classes. \nIncrement class sizes in the file." << endl;
        cout << counter << " Lectures were added to available classes.\nBut there is total of " << courseSize << " lectures."<<endl;
    }
}

string UIdisplay(){
    string output = "";
    if(courseSize > counter){
        output += "There is no way to make a perfect schedule, not enough empty classes.Increment class sizes in the file. ";
        output += "-" + to_string(counter) + "-" + " Lectures were added to available classes.But there is total of " + "-" + to_string(courseSize) + "-" + " lectures.";
    }
    else{
        output += "Best possible schedule has been created.";
    }
    return output;
}

int yearOf(string code){
    for(int i = 0; i<electiveSize;i++){
        if(vector_electiveCourse[i].getCode() == code)
            return vector_electiveCourse[i].getYear();
    }
    for(int i = 0; i<compulsorySize;i++){
        if(vector_compulsaryCourse[i].getCode() == code)
            return vector_compulsaryCourse[i].getYear();
    }
}

bool yearChecker(content content,int i){

    for(int j=0; j < bigClassSize;j++ ){
        if(mainVector[i][j].getYear() == content.getYear() && content.getTime() == "Morning"){
            return true;
        }
    }
    for(int j=3; j < bigClassSize*2;j++ ){
        if(mainVector[i][j].getYear() == content.getYear() && content.getTime() == "Afternoon"){
            return true;
        }
    }
    return false;
}

bool busyChecker(content content){
    vector_busy = myBusy.readCsv();
    busySize = vector_busy.size();
    for(int k = 0; k < busySize; k++){
        if(content.getCode() == vector_busy[k].getCode() &&
                vector_busy[k].getDay() == content.getDay() &&
                vector_busy[k].getTime() == content.getTime()) {
            return true;
        }
    }
    return false;
}

void addService(){

    for(int i = 0; i < serviceSize; i++){
        int day = dayToNum(vector_service[i].getDay());
        bool flag = false;
        if(vector_service[i].getTime() == "Morning"){
            for(int k = 0; k < bigClassSize; k++){
                if(mainVector[day][k].empty() && !flag){
                    if((k >= availableClassSize && k < availableClassSize) || (k >= availableClassSize+bigClassSize && k < availableClassSize*2)){
                        continue;
                    }
                    else{
                        mainVector[day][k].setCode(vector_service[i].getCode());
                        mainVector[day][k].setDay(vector_service[i].getDay());
                        mainVector[day][k].setTime(vector_service[i].getTime());
                        mainVector[day][k].setYear(yearOf(vector_service[i].getCode()));
                        mainVector[day][k].setclassType("Big Class " + to_string(k % bigClassSize + 1));
                        counter++;
                        flag = true;
                    }
                }
            }
        }
        else{
            for(int k = availableClassSize-1; k < availableClassSize*2; k++){
                if(mainVector[day][k].empty() && !flag){
                    if((k >= bigClassSize && k < availableClassSize) || (k >= availableClassSize+bigClassSize && k < availableClassSize*2)){
                        continue;
                    }
                    else{
                        mainVector[day][k].setCode(vector_service[i].getCode());
                        mainVector[day][k].setDay(vector_service[i].getDay());
                        mainVector[day][k].setTime(vector_service[i].getTime());
                        mainVector[day][k].setYear(yearOf(vector_service[i].getCode()));
                        mainVector[day][k].setclassType("Big Class " + to_string(k % bigClassSize + 1));
                        counter++;
                        flag = true;
                    }
                }
            }
        }
    }
}

void addCompulsory(){
    content current;
    string tempTime;
    for(int i = 0; i<compulsorySize;i++){
        bool flag = false;
        if(vector_compulsaryCourse[i].getDepser() == "D"){
            for(int j = 0; j < 5; j++){
                for(int k = 0; k < availableClassSize*2; k++){
                    if(k<availableClassSize) tempTime = "Morning";
                    else tempTime = "Afternoon";
                    if(!flag){
                        if(k<bigClassSize || (k >= availableClassSize && k<(availableClassSize+bigClassSize))){ //Yalnızca bigclass a yerleştirme
                            if(mainVector[j][k].empty()){
                                current.setCode(vector_compulsaryCourse[i].getCode());
                                current.setDay(numToDay(j));
                                current.setTime(tempTime);
                                current.setYear(yearOf(vector_compulsaryCourse[i].getCode()));
                                current.setclassType("Big Class " + to_string(k % bigClassSize + 1));
                                if(!yearChecker(current, j) && !busyChecker(current)){
                                    mainVector[j][k] = current;
                                    counter++;
                                    flag=true;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void addElective(){
    string tempTime;
    content current;
    for(int i = 0; i<electiveSize;i++){
        bool flag = false;
        if(vector_electiveCourse[i].getDepser() == "D"){
            for(int j = 0; j < 5; j++){
                for(int k = 0; k < availableClassSize*2; k++){
                    if(k<availableClassSize) tempTime = "Morning";
                    else tempTime = "Afternoon";
                    if(!flag && mainVector[j][k].empty()){
                        current.setCode(vector_electiveCourse[i].getCode());
                        current.setDay(numToDay(j));
                        current.setTime(tempTime);
                        current.setYear(yearOf(vector_electiveCourse[i].getCode()));
                        if((k >= bigClassSize && k < availableClassSize) || (k >= availableClassSize+bigClassSize && k < availableClassSize*2)){
                            current.setclassType("Small Class " + to_string(k % smallClassSize + 1));
                        } else
                            current.setclassType("Big Class " + to_string(k % bigClassSize + 1));
                        if(!yearChecker(current, j) && !busyChecker(current)){
                            mainVector[j][k] = current;
                            counter++;
                            flag=true;
                        }
                    }
                }
            }
        }
    }
}

void printCsv(){

    QString filename = "output.csv";
    QFile file(filename);

    if (file.open(QIODevice::WriteOnly)) {
        QTextStream stream(&file);
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < availableClassSize*2; j++){
                stream << QString::fromStdString(mainVector[i][j].getDay()) << ";"
                       << QString::fromStdString(mainVector[i][j].getTime())  << ";"
                       << QString::fromStdString(mainVector[i][j].getCode()) << ";"
                       << QString::fromStdString(mainVector[i][j].getclassType()) <<endl;
            }
        }
    }
    file.close();
}


vector<course> getLectures(){
    copy(vector_electiveCourse.begin(), vector_electiveCourse.end(), back_inserter(vector_compulsaryCourse));
    return vector_compulsaryCourse;
}

void busyCsv(QString code,QString day,QString time){

    QString filename = "busy.csv";
    QFile file(filename);
    if (file.open(QIODevice::WriteOnly | QIODevice::Append)) {
        QTextStream stream(&file);

        stream << code << ";"
               <<day << ";"
              << time <<endl;
    }
    file.close();
}

void busyRemove(int index){

    QString filename = "busy.csv";
    QFile file(filename);
    vector_busy = myBusy.readCsv();
    busySize = vector_busy.size();
    if (file.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) {
        QTextStream stream(&file);
        for(int i = 0; i < busySize; i++){
            if(i == index){
            }else{
                stream << QString::fromStdString(vector_busy[i].getCode()) << ";"
                       << QString::fromStdString(vector_busy[i].getDay()) << ";"
                       << QString::fromStdString(vector_busy[i].getTime()) <<endl;

            }
        }
    }
    file.close();
}

//THIS IS THE END OF ALGORITHM FUNCTIONS@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

void MainWindow::initTableWidget(){

    int rowSize = mainVector[0].size();
    ui->table->setRowCount(rowSize);
    ui->table->setColumnCount(6);

    for(int column=0;column<6;column++){
        for(int row=0; row < rowSize; row++){
            if(column == 0){
                QTableWidgetItem *itemcode = new QTableWidgetItem();
                for(int i = 0; i < 5; i++){
                    if(!mainVector[i][row].getclassType().empty()){
                        itemcode->setText(QString::fromStdString(mainVector[i][row].getclassType()));
                        continue;
                    }
                }
                ui->table->setItem(row, 0, itemcode);
            }
            else{
                QString code = QString::fromStdString(mainVector[column-1][row].getCode());
                QTableWidgetItem *itemcode = new QTableWidgetItem();
                itemcode->setText(code);
                ui->table->setItem(row, column, itemcode);
            }
        }
    }
    refreshBusyTable();
}

void MainWindow::refreshBusyTable(){

    vector_busy = myBusy.readCsv();
    int busyRow = vector_busy.size();
    ui->tableWidget->setRowCount(busyRow);
    ui->tableWidget->setColumnCount(3);

    for(int row=0; row < busyRow; row++){
        QString code = QString::fromStdString(vector_busy[row].getCode());
        QString day = QString::fromStdString(vector_busy[row].getDay());
        QString time = QString::fromStdString(vector_busy[row].getTime());
        QTableWidgetItem *itemCode= new QTableWidgetItem();
        QTableWidgetItem *itemDay= new QTableWidgetItem();
        QTableWidgetItem *itemTime= new QTableWidgetItem();
        itemCode->setText(code);
        ui->tableWidget->setItem(row, 0, itemCode);
        itemDay->setText(day);
        ui->tableWidget->setItem(row, 1, itemDay);
        itemTime->setText(time);
        ui->tableWidget->setItem(row, 2, itemTime);
    }
}

void MainWindow::fillCombobox(){

    vector<course> courses = getLectures();
    QStringList list;
    for(int i =0; i < courses.size(); i++){
        list.append(QString::fromStdString(courses[i].getCode()));
    }
     ui->comboBoxCode->addItems(list);
}

void MainWindow::on_ButtonDisplay_clicked(){

    counter = 0;
    vector_classroom = myClassroom.readCsv();
    bigClassSize = vector_classroom[0].getAmount();
    smallClassSize = vector_classroom[1].getAmount();
    availableClassSize = bigClassSize + smallClassSize;
    ui->table->clearContents();
    ui->table->model()->removeRows(0, ui->table->rowCount());
    mainVector.clear();
    mainVector.resize(5, vector<content>(availableClassSize*2));

    addService();
    addCompulsory();
    addElective();
    initTableWidget();
    output();
    buttonCounter++;

}

void MainWindow::output(){

    ui->TextOutput->setPlainText(QString::fromStdString(UIdisplay()));
}

void MainWindow::on_ButtonPrint_clicked(){

    QMessageBox msgBox;
    if(buttonCounter > 0){
        msgBox.setText("The document has been modified.");
        msgBox.setInformativeText("Do you want to save your changes ?");
    }
    else {
        msgBox.setText("Do you want to save the document in CSV format.");
    }

    msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Save);
    int ret = msgBox.exec();

    switch (ret) {
      case QMessageBox::Save:
          printCsv();
          break;
      case QMessageBox::Cancel:
          // Cancel was clicked
          break;
      default:
          // should never be reached
          break;
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    busy current;
    QString code = ui->comboBoxCode->currentText();
    current.setCode(code.toStdString());
    QString day = ui->comboBoxDay->currentText();
    current.setDay(day.toStdString());
    QString time = ui->comboBoxTime->currentText();
    current.setTime(time.toStdString());
    if(current.getDay() == "Please choose..." || current.getTime() == "Please choose..."){
        showMessage();
    }
    else{
        vector_busy.push_back(current);
        busyCsv(code,day,time);
        refreshBusyTable();

        ui->TextOutput->setPlainText(QString::fromStdString("Added "+ vector_busy.back().getCode() + " to busy.csv located at your build folder."));
    }
}

void showMessage(){
    QMessageBox msgBox;
    msgBox.setText("Please choose day and time correctly!");

    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setDefaultButton(QMessageBox::Ok);
    int ret = msgBox.exec();

    switch (ret) {
      case QMessageBox::Ok:
          break;
      default:
          // should never be reached
          break;
    }
}
void MainWindow::help() //exits application, if named exit(), ide detects it as keyword so its left as is.
{
    QMetaObject::invokeMethod(this, "close", Qt::QueuedConnection);
}

void MainWindow::on_pushButton_3_clicked(){

    int row = ui->tableWidget->currentRow();
    ui->TextOutput->setPlainText(QString::fromStdString("Deleted "+ vector_busy.back().getCode() + " from busy.csv located at your build folder."));
    busyRemove(row);
    vector_busy = myBusy.readCsv();
    ui->tableWidget->removeRow(row);


}

void MainWindow::on_pushButton_4_clicked() {
        //read data from user class size write in csv

        vector<classroom> vectorClasses;
        classroom bigClass, smallClass;
        QString big = ui->comboBoxBig->currentText();
        bigClass.setAmount(stoi(big.toStdString()));
        bigClass.setclassType("bigClass");
        QString small = ui->comboBoxSmall->currentText();
        smallClass.setAmount(stoi(small.toStdString()));
        smallClass.setclassType("smallClass");
        vectorClasses.push_back(bigClass);
        vectorClasses.push_back(smallClass);
        QString filename = "classroom.csv";
        QFile file(filename);
        if (file.open(QIODevice::WriteOnly)) {
            QTextStream stream(&file);
            for(int i = 0; i < vectorClasses.size(); i++){
                stream << QString::fromStdString(vectorClasses[i].getclassType()) << ";"
                       << vectorClasses[i].getAmount() <<endl;
            }
        }
        file.close();
}
