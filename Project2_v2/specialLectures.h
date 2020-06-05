#ifndef SPECIALLECTURES_H
#define SPECIALLECTURES_H

#include<iostream>
#include<string.h>
#include <vector>
#include <QFile>
#include <QTextStream>

using namespace std;

class specialLectures{
private:
    string code, day, time;
public:

    specialLectures(){}
    specialLectures(string code, string day, string time){
        this->code = code;
        this->day = day;
        this->time = time;
    }
    ~specialLectures(){}

    string getCode(){
        return code;
    }

    void setCode(string code){
        this->code = code;
    }

    string getDay(){
        return day;
    }

    void setDay(string day){
        this->day = day;
    }

    string getTime(){
        return time;
    }

    void setTime(string time){
        this->time = time;
    }

    vector<specialLectures> readCsv();
};
#endif // SPECIALLECTURES_H
