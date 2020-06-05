#ifndef SCHEDULER_H
#define SCHEDULER_H
#include<iostream>
#include<string.h>
#include"content.h"
#include <QTableWidget>
#include "course.h"
#include "busy.h"
using namespace std;

void display();
void addService();
void addCompulsory();
void addElective();
bool yearChecker(content content, int i);
inline int dayToNum(string day);
inline string numToDay(int day);
bool busyChecker(content content);
void printCsv();
string UIdisplay();
void busyCsv(QString code,QString day,QString time);
vector<busy> getBusy();
vector<course> getLectures();
vector<vector<content>> getVector();
void busyRemove(int index);
void showMessage();
#endif // SCHEDULER_H
