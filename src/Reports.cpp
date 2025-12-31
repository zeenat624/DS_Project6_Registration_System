#include "Reports.h"

void Reports::showEnrolled() {
    cout << " Enrolled Students in All Sections " << endl;
    s->printEnrolled();
}
void Reports::showWaitlist() {
    cout << " Waitlist for All Sections " << endl;
    s->printWaitlist();
}


