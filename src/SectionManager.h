#ifndef SECTION_H
#define SECTION_H

#include <iostream>
#include "NodeQueue.h"

using namespace std;

class Section {
private:
    int capacity;
    int enrolledCount;
    int enrolledStudents[30];
    NodeBasedQueue waitlist;

public:
    Section(int cap);

    bool enrollStudent(int studentID);
    void dropStudent(int studentID);
    void printEnrolled();
    void printWaitlist();
};

#endif

