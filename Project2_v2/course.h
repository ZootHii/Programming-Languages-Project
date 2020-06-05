#ifndef COURSE_H
#define COURSE_H
#include<iostream>
#include<string.h>
#include <vector>
#include <QFile>
#include <QTextStream>

using namespace std;

class course{
private:
    string code, name, type, depser, teacher;
    int year, credit;
public:
    //Default parameter constructor
    course(){
        code ="";
        name ="";
        type ="";
        depser ="";
        teacher ="";
        year =0;
        credit=0;
    }
    course(string code,string name, int year, int credit, string type, string depser, string teacher){
        this->code = code;
        this->name = name;
        this->type = type;
        this->depser = depser;
        this->teacher = teacher;
        this->year = year;
        this->credit = credit;

    }


    string getCode(){
        return code;
    }
    void setCode(string code){
        this->code = code;
    }

    string getName(){
        return name;
    }
    void setName(string name){
        this->name = name;
    }

    string getType(){
        return type;
    }
    void setType(string type){
        this->type = type;
    }

    string getDepser(){
        return depser;
    }
    void setDepser(string depser){
        this->depser = depser;
    }

    string getTeacher(){
        return teacher;
    }
    void setTeacher(string teacher){
        this->teacher = teacher;
    }

    int getYear(){
        return year;
    }
    void setYear(int year){
        this->year = year;
    }

    int getCredit(){
        return credit;
    }
    void setCredit(int credit){
        this->credit = credit;
    }

    vector<course> readCsv();

    ~course(){}

};

#endif // COURSE_H
