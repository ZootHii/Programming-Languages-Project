#ifndef CONTENT_H
#define CONTENT_H
#include<iostream>
#include<string.h>
#include <vector>

using namespace std;

class content{
private:
    string code, classType, time, day;
    int year;
public:

    content(){}
    content(string code, string classType, string time, string day, int year){
        this->code = code;
        this->day = day;
        this->time = time;
        this->classType = classType;
        this->year = year;
    }
    ~content(){}

    string getclassType(){
        return classType;
    }

    void setclassType(string classType){
        this->classType = classType;
    }

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

    void setYear(int year){
        this->year = year;
    }

    int getYear(){
        return year;
    }

    bool empty(){
        if(code.empty() && classType.empty() && time.empty() && day.empty()) return true;
        else return false;
    }
};

#endif // CONTENT_H
