#ifndef SERVICE_H
#define SERVICE_H
#include<iostream>
#include<string.h>
#include <vector>
#include <QFile>
#include <QTextStream>
#include "specialLectures.h"
#include "mainwindow.h"

using namespace std;

struct NotFoundServiceException : public exception {
    const char * what () const throw () {
        return "No such file exists! Exception. Please correct file name: ";
    }
};

class service: public specialLectures{

private:

public:
    service(){}
    ~service(){}

    vector<service> readCsv(){

        vector<service> vector_service;
        service service;
        QString filename = "service.csv";
        try {
            QFile file(filename);
            if(file.size() == 0){
                throw NotFoundServiceException();
            }
            else{
                if (file.open(QIODevice::ReadOnly)) {

                    int lineindex = 0;
                    QTextStream in(&file);

                    while (!in.atEnd()) {

                        QString fileLine = in.readLine();
                        QStringList lineToken = fileLine.split(";", QString::SkipEmptyParts);

                        QString Qcode = lineToken.at(0);
                        service.setCode(Qcode.toStdString());

                        QString Qday = lineToken.at(1);
                        service.setDay(Qday.toStdString());

                        QString Qtime = lineToken.at(2);
                        service.setTime(Qtime.toStdString());

                        vector_service.push_back(service);

                        lineindex++;
                    }
                    file.close();
                }
                return vector_service;
            }
        } catch (exception& e) {
            cout<<e.what()<< filename.toStdString() <<" For the program to run correctly"<<endl;

        }
        return vector_service;
    }
};

#endif // SERVICE_H
