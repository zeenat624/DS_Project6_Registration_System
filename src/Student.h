#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "Timetable.h"

using namespace std;

class Student {
private:
    int id;
    string name;
    string completedCourses[5];
    int completedCount;

public:
    Timetable timetable;

    Student();
    Student(int sid, string sname);
    int getId();
    string getName();

    void addCompletedCourse(string course);
    void printCompletedCourses();
    string getCompletedCourse(int index);
    int getCompletedCount();
};

#endif
