/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEXIT;
    QWidget *centralwidget;
    QTableWidget *table;
    QLabel *LabelError;
    QPlainTextEdit *TextOutput;
    QTabWidget *tabWidget;
    QWidget *tabClass;
    QComboBox *comboBoxSmall;
    QLabel *label_2;
    QLabel *label;
    QComboBox *comboBoxBig;
    QPushButton *pushButton_4;
    QWidget *tab_busy;
    QLabel *label_3;
    QComboBox *comboBoxCode;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBoxDay;
    QComboBox *comboBoxTime;
    QTableWidget *tableWidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *ButtonDisplay;
    QPushButton *ButtonPrint;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(900, 700);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(202, 232, 213, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush2(QColor(132, 169, 172, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(59, 105, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush4(QColor(0, 0, 0, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        MainWindow->setPalette(palette);
        actionEXIT = new QAction(MainWindow);
        actionEXIT->setObjectName(QString::fromUtf8("actionEXIT"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        table = new QTableWidget(centralwidget);
        if (table->columnCount() < 6)
            table->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        table->setObjectName(QString::fromUtf8("table"));
        table->setGeometry(QRect(270, 380, 617, 265));
        QPalette palette1;
        QBrush brush5(QColor(255, 255, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        QBrush brush6(QColor(240, 240, 240, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        table->setPalette(palette1);
        table->setAutoFillBackground(true);
        LabelError = new QLabel(centralwidget);
        LabelError->setObjectName(QString::fromUtf8("LabelError"));
        LabelError->setGeometry(QRect(20, 420, 81, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush7(QColor(255, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush7);
        QBrush brush8(QColor(255, 127, 127, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush8);
        QBrush brush9(QColor(255, 63, 63, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        QBrush brush10(QColor(127, 0, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush10);
        QBrush brush11(QColor(170, 0, 0, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush5);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        QBrush brush12(QColor(255, 255, 220, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush12);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush13(QColor(255, 0, 0, 128));
        brush13.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        LabelError->setPalette(palette2);
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        LabelError->setFont(font);
        LabelError->setAutoFillBackground(false);
        TextOutput = new QPlainTextEdit(centralwidget);
        TextOutput->setObjectName(QString::fromUtf8("TextOutput"));
        TextOutput->setGeometry(QRect(20, 460, 221, 181));
        QPalette palette3;
        QBrush brush14(QColor(0, 255, 0, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush14);
        QBrush brush15(QColor(202, 232, 213, 0));
        brush15.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush15);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush15);
        QBrush brush16(QColor(120, 120, 120, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        TextOutput->setPalette(palette3);
        QFont font1;
        font1.setPointSize(12);
        TextOutput->setFont(font1);
        TextOutput->setAutoFillBackground(false);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 711, 311));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        tabWidget->setPalette(palette4);
        tabClass = new QWidget();
        tabClass->setObjectName(QString::fromUtf8("tabClass"));
        comboBoxSmall = new QComboBox(tabClass);
        comboBoxSmall->addItem(QString());
        comboBoxSmall->addItem(QString());
        comboBoxSmall->addItem(QString());
        comboBoxSmall->addItem(QString());
        comboBoxSmall->addItem(QString());
        comboBoxSmall->setObjectName(QString::fromUtf8("comboBoxSmall"));
        comboBoxSmall->setGeometry(QRect(250, 120, 61, 31));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        comboBoxSmall->setPalette(palette5);
        QFont font2;
        font2.setPointSize(10);
        comboBoxSmall->setFont(font2);
        label_2 = new QLabel(tabClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 120, 201, 31));
        label_2->setFont(font1);
        label = new QLabel(tabClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 181, 31));
        label->setFont(font);
        comboBoxBig = new QComboBox(tabClass);
        comboBoxBig->addItem(QString());
        comboBoxBig->addItem(QString());
        comboBoxBig->addItem(QString());
        comboBoxBig->addItem(QString());
        comboBoxBig->addItem(QString());
        comboBoxBig->setObjectName(QString::fromUtf8("comboBoxBig"));
        comboBoxBig->setGeometry(QRect(250, 40, 61, 31));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        comboBoxBig->setPalette(palette6);
        comboBoxBig->setFont(font2);
        pushButton_4 = new QPushButton(tabClass);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(500, 55, 80, 80));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush5);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush5);
        QBrush brush17(QColor(255, 255, 255, 128));
        brush17.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush17);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush17);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush17);
#endif
        pushButton_4->setPalette(palette7);
        pushButton_4->setFont(font1);
        tabWidget->addTab(tabClass, QString());
        tab_busy = new QWidget();
        tab_busy->setObjectName(QString::fromUtf8("tab_busy"));
        label_3 = new QLabel(tab_busy);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 30, 161, 31));
        label_3->setFont(font1);
        comboBoxCode = new QComboBox(tab_busy);
        comboBoxCode->setObjectName(QString::fromUtf8("comboBoxCode"));
        comboBoxCode->setGeometry(QRect(210, 31, 141, 31));
        comboBoxCode->setFont(font2);
        label_4 = new QLabel(tab_busy);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 80, 161, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(tab_busy);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 130, 161, 31));
        label_5->setFont(font1);
        comboBoxDay = new QComboBox(tab_busy);
        comboBoxDay->addItem(QString());
        comboBoxDay->addItem(QString());
        comboBoxDay->addItem(QString());
        comboBoxDay->addItem(QString());
        comboBoxDay->addItem(QString());
        comboBoxDay->addItem(QString());
        comboBoxDay->setObjectName(QString::fromUtf8("comboBoxDay"));
        comboBoxDay->setGeometry(QRect(210, 80, 141, 31));
        comboBoxDay->setFont(font2);
        comboBoxTime = new QComboBox(tab_busy);
        comboBoxTime->addItem(QString());
        comboBoxTime->addItem(QString());
        comboBoxTime->addItem(QString());
        comboBoxTime->setObjectName(QString::fromUtf8("comboBoxTime"));
        comboBoxTime->setGeometry(QRect(210, 130, 141, 31));
        comboBoxTime->setFont(font2);
        tableWidget = new QTableWidget(tab_busy);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(370, 10, 317, 211));
        pushButton_2 = new QPushButton(tab_busy);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 230, 150, 30));
        pushButton_3 = new QPushButton(tab_busy);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(540, 230, 150, 30));
        tabWidget->addTab(tab_busy, QString());
        ButtonDisplay = new QPushButton(centralwidget);
        ButtonDisplay->setObjectName(QString::fromUtf8("ButtonDisplay"));
        ButtonDisplay->setGeometry(QRect(780, 90, 80, 80));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        QBrush brush18(QColor(59, 105, 120, 128));
        brush18.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush18);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush18);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush18);
#endif
        ButtonDisplay->setPalette(palette8);
        ButtonDisplay->setFont(font2);
        ButtonPrint = new QPushButton(centralwidget);
        ButtonPrint->setObjectName(QString::fromUtf8("ButtonPrint"));
        ButtonPrint->setGeometry(QRect(738, 330, 151, 31));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush18);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush18);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush18);
#endif
        ButtonPrint->setPalette(palette9);
        ButtonPrint->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        comboBoxBig->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionEXIT->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Monday", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Tueasday", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Wednesday", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Thursday", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Friday", nullptr));
        LabelError->setText(QCoreApplication::translate("MainWindow", "OUTPUT :", nullptr));
        comboBoxSmall->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBoxSmall->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        comboBoxSmall->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        comboBoxSmall->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));
        comboBoxSmall->setItemText(4, QCoreApplication::translate("MainWindow", "5", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "Choose Small class amount", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Choose Big class amount :", nullptr));
        comboBoxBig->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBoxBig->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        comboBoxBig->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        comboBoxBig->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));
        comboBoxBig->setItemText(4, QCoreApplication::translate("MainWindow", "5", nullptr));

        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabClass), QCoreApplication::translate("MainWindow", "Classes", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Choose class name :", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Choose class day :", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Choose class time :", nullptr));
        comboBoxDay->setItemText(0, QCoreApplication::translate("MainWindow", "Please choose...", nullptr));
        comboBoxDay->setItemText(1, QCoreApplication::translate("MainWindow", "Monday", nullptr));
        comboBoxDay->setItemText(2, QCoreApplication::translate("MainWindow", "Tuesday", nullptr));
        comboBoxDay->setItemText(3, QCoreApplication::translate("MainWindow", "Wednesday", nullptr));
        comboBoxDay->setItemText(4, QCoreApplication::translate("MainWindow", "Thursday", nullptr));
        comboBoxDay->setItemText(5, QCoreApplication::translate("MainWindow", "Friday", nullptr));

        comboBoxTime->setItemText(0, QCoreApplication::translate("MainWindow", "Please choose...", nullptr));
        comboBoxTime->setItemText(1, QCoreApplication::translate("MainWindow", "Morning", nullptr));
        comboBoxTime->setItemText(2, QCoreApplication::translate("MainWindow", "Afternoon", nullptr));

        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Day", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_busy), QCoreApplication::translate("MainWindow", "Busy Lectures", nullptr));
        ButtonDisplay->setText(QCoreApplication::translate("MainWindow", "Update\n"
"Table", nullptr));
        ButtonPrint->setText(QCoreApplication::translate("MainWindow", "Print CSV File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
