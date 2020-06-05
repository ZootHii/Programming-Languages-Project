#ifndef BUSY_H
#define BUSY_H
#include<iostream>
#include<string.h>
#include <vector>
#include <QFile>
#include <QTextStream>
#include "specialLectures.h"
#include "mainwindow.h"

using namespace std;

struct NotFoundBusyException : public exception {
   const char * what () const throw () {
      return "No such file exists! Exception. Please correct file name: ";
   }
};

class busy: public specialLectures{

private:

public:
    busy(){}
    ~busy(){}

    vector<busy> readCsv(){
        vector<busy> vector_busy;
        busy busy;
        QString filename = "busy.csv";

        try {
            QFile file(filename);
            if(file.size() == 0){
                throw NotFoundBusyException();
            }
            else{
            if (file.open(QIODevice::ReadOnly)) {

                int lineindex = 0;
                QTextStream in(&file);

                while (!in.atEnd()) {

                    QString fileLine = in.readLine();
                    QStringList lineToken = fileLine.split(";", QString::SkipEmptyParts);

                    QString Qcode = lineToken.at(0);
                    busy.setCode(Qcode.toStdString());

                    QString Qday = lineToken.at(1);
                    busy.setDay(Qday.toStdString());

                    QString Qtime = lineToken.at(2);
                    busy.setTime(Qtime.toStdString());

                    vector_busy.push_back(busy);

                    lineindex++;
                }
                file.close();
            }
            return vector_busy;
            }
        } catch (exception& e) {
            cout<<e.what()<< filename.toStdString() <<" For the program to run correctly"<<endl;

        }
    return vector_busy;
    }
};

#endif // BUSY_H
