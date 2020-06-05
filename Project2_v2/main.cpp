#include "mainwindow.h"
#include <string.h>
#include<iostream>
#include <QApplication>
#include "scheduler.h"
#include "course.h"
#include "specialLectures.h"
#include "busy.h"
#include "classroom.h"
#include "compulsoryCourse.h"
#include "electiveCourse.h"
#include "content.h"
#include "service.h"
#include "busy.h"
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    addService();
    addCompulsory();
    addElective();
    //display();
    MainWindow w;
    w.show();
    return a.exec();
}
