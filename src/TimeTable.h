#ifndef TIMETABLE_H
#define TIMETABLE_H

#include <iostream>
using namespace std;

class Timetable{
    int table[5][6];

public:
    Timetable();

    bool addCourse(int day,int slot,int courseID);
    bool hasConflict(int day,int slot);
    void assignCourse(int day,int slot,int courseID);
    void removeCourse(int day,int slot);
    void display();
};

#endif

