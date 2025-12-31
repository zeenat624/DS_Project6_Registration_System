#include <iostream>
#include <string>
#include "Student.h"
#include "Timetable.h"

using namespace std;

   Student::Student() {
        id = 0;
        name = "";
        completedCount = 0;
    }

    Student::Student(int sid, string sname) {
        id = sid;
        name = sname;
        completedCount = 0;
    }

    int Student::getId()
    { return id;
    }
    string Student::getName() {
    return name; }

    void Student::addCompletedCourse(string course) {
        if(completedCount < 5) {
            completedCourses[completedCount++] = course;
        }
    }

    void Student::printCompletedCourses() {
        cout << "Completed Courses for " << name << ": ";
        if(completedCount == 0) {
            cout << "None";
        } else {
            for(int i = 0; i < completedCount; i++) {
                cout << completedCourses[i] << " ";
            }
        }
        cout << endl;
    }


