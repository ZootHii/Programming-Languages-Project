#ifndef CLASSROOM_H
#define CLASSROOM_H
#include<iostream>
#include<string.h>
#include <vector>
#include <QFile>
#include <QTextStream>

using namespace std;

struct NotFoundClassroomException : public exception {
   const char * what () const throw () {
      return "No such file exists! Exception. Please correct file name: ";
   }
};

class classroom{
private:
    string classType;
    int amount;

public:

    classroom(){}
    classroom(string classType, int amount){
        this->classType = classType;
        this->amount = amount;
    }

    ~classroom(){}

    string getclassType(){
        return classType;
    }

    void setclassType(string classType){
        this->classType = classType;
    }

    int getAmount(){
        return amount;
    }

    void setAmount(int amount){
        this->amount = amount;
    }

    vector<classroom> readCsv(){

        vector<classroom> vector_classroom;
        classroom Classroom;
        QString filename = "classroom.csv";
        try {
            QFile file(filename);
            if(file.size() == 0){
                throw NotFoundClassroomException();
            }
            else{
                if (file.open(QIODevice::ReadOnly)) {

                    int lineindex = 0;
                    QTextStream in(&file);

                    while (!in.atEnd()) {

                        QString fileLine = in.readLine();
                        QStringList lineToken = fileLine.split(";", QString::SkipEmptyParts);

                        QString Qclass_which = lineToken.at(0);
                        Classroom.setclassType(Qclass_which.toStdString());

                        QString Qamount = lineToken.at(1);
                        Classroom.setAmount(stoi(Qamount.toStdString()));

                        vector_classroom.push_back(Classroom);

                        lineindex++;
                    }
                    file.close();
                }
                return vector_classroom;
            }
        } catch (exception& e) {
            cout<<e.what()<< filename.toStdString() <<"\n"<<endl;
        }
        return vector_classroom;
    }
};

#endif // CLASSROOM_H
