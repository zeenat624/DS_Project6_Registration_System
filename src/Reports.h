#ifndef REPORTS_H
#define REPORTS_H

#include "SectionHeap.h"
#include <iostream>
using namespace std;

class Reports {
private:
    SectionHeap* s;

public:

    void showEnrolled();
    void showWaitlist();
    void showCapacity();
};

#endif
