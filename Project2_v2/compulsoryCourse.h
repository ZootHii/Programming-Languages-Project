#ifndef COMPULSORYCOURSE_H
#define COMPULSORYCOURSE_H
#include<iostream>
#include<string.h>
#include <vector>
#include <QFile>
#include <QTextStream>
#include "course.h"

using namespace std;

struct NotFoundCompulsoryException : public exception {
    const char * what () const throw () {
        return "No such file exists! Exception. Please correct file name: ";
    }
};


class compulsaryCourse: public course{

private:

public:

    compulsaryCourse(){}
    ~compulsaryCourse(){}

    vector<course> readCsv(){

        compulsaryCourse compulsaryCourse;
        vector<course> vector_compulsaryCourse;
        QString filename = "courses.csv";
        try {
            QFile file(filename);
            if(file.size() == 0){
                throw NotFoundCompulsoryException();
            }
            else{
                if (file.open(QIODevice::ReadOnly)) {

                    int lineindex = 0;
                    QTextStream in(&file);

                    while (!in.atEnd()) {

                        QString fileLine = in.readLine();
                        QStringList lineToken = fileLine.split(";", QString::SkipEmptyParts);

                        QString Qcode = lineToken.at(0);
                        compulsaryCourse.setCode(Qcode.toStdString());

                        QString Qname = lineToken.at(1);
                        compulsaryCourse.setName(Qname.toStdString());

                        QString Qyear = lineToken.at(2);
                        compulsaryCourse.setYear(stoi(Qyear.toStdString()));

                        QString Qcredit = lineToken.at(3);
                        compulsaryCourse.setCredit(stoi(Qcredit.toStdString()));

                        QString Qtype = lineToken.at(4);
                        compulsaryCourse.setType(Qtype.toStdString());

                        QString Qdepser = lineToken.at(5);
                        compulsaryCourse.setDepser(Qdepser.toStdString());

                        QString Qteacher = lineToken.at(6);
                        compulsaryCourse.setTeacher(Qteacher.toStdString());

                        if(compulsaryCourse.getType() == "C"){
                            vector_compulsaryCourse.push_back(compulsaryCourse);
                        }

                        lineindex++;
                    }
                    file.close();
                }
                return vector_compulsaryCourse;
            }
        } catch (exception& e) {
            cout<<e.what()<< filename.toStdString() <<" For the program to run correctly"<<endl;

        }
        return vector_compulsaryCourse;
    }
};

#endif // COMPULSORYCOURSE_H
