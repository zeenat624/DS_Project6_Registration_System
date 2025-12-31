#ifndef SECTIONHEAP_H
#define SECTIONHEAP_H

#include <iostream>
#include "SectionManager.h"
using namespace std;

class SectionHeap {
private:
    Section* sections[10];
    int size;

public:
    SectionHeap();
    void minHeapifyUp(int index);
    void minHeapifyDown(int index);
    void addSection(Section* s);
    void enrollStudent(int studentID);
    void printEnrolled();
    void printWaitlist();
};

#endif
