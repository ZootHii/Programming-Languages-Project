#ifndef ELECTIVECOURSE_H
#define ELECTIVECOURSE_H
#include<iostream>
#include<string.h>
#include <vector>
#include <QFile>
#include <QTextStream>
#include "course.h"

using namespace std;

struct NotFoundElectiveException : public exception {
    const char * what () const throw () {
        return "No such file exists! Exception. Please correct file name: ";
    }
};

class electiveCourse: public course{

private:

public:

    electiveCourse(){}
    ~electiveCourse(){}

    vector<course> readCsv(){

        electiveCourse electiveCourse;
        vector<course> vector_electiveCourse;
        QString filename = "courses.csv";
        try {
            QFile file(filename);
            if(file.size() == 0){
                throw NotFoundElectiveException();
            }
            else{
                if (file.open(QIODevice::ReadOnly)) {

                    int lineindex = 0;
                    QTextStream in(&file);

                    while (!in.atEnd()) {

                        QString fileLine = in.readLine();
                        QStringList lineToken = fileLine.split(";", QString::SkipEmptyParts);

                        QString Qcode = lineToken.at(0);
                        electiveCourse.setCode(Qcode.toStdString());

                        QString Qname = lineToken.at(1);
                        electiveCourse.setName(Qname.toStdString());

                        QString Qyear = lineToken.at(2);
                        electiveCourse.setYear(stoi(Qyear.toStdString()));

                        QString Qcredit = lineToken.at(3);
                        electiveCourse.setCredit(stoi(Qcredit.toStdString()));

                        QString Qtype = lineToken.at(4);
                        electiveCourse.setType(Qtype.toStdString());

                        QString Qdepser = lineToken.at(5);
                        electiveCourse.setDepser(Qdepser.toStdString());

                        QString Qteacher = lineToken.at(6);
                        electiveCourse.setTeacher(Qteacher.toStdString());

                        if(electiveCourse.getType() == "E"){
                            vector_electiveCourse.push_back(electiveCourse);
                        }

                        lineindex++;
                    }
                    file.close();
                }
                return vector_electiveCourse;
            }
        } catch (exception& e) {
                    cout<<e.what()<< filename.toStdString() <<" For the program to run correctly"<<endl;

                }


        return vector_electiveCourse;
    }
};

#endif // ELECTIVECOURSE_H
