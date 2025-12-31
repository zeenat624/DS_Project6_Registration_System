#include "CourseGraph.h"
#include <iostream>
using namespace std;

CourseGraph::CourseGraph() {
    size = 5;

    courses[0] = "PSPF";
    courses[1] = "OOP";
    courses[2] = "DSA";
    courses[3] = "AI";
    courses[4] = "Algorithms";

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            Adj[i][j] = 0;
        }

    }

    Adj[0][1] = 1;
    Adj[1][2] = 1;
    Adj[2][3] = 1;
    Adj[3][4] = 1;
}

int CourseGraph::getCourseIndex(string course) {
    for(int i=0;i<size;i++){
         if(courses[i] == course){
            return i;
         }
    }
    return -1;
}

bool CourseGraph::canTakeCourse(string course, bool completed[5]) {
    int idx = getCourseIndex(course);
    if(idx == -1){
        return false;
    }

    for(int i=0;i<size;i++) {
        if(Adj[i][idx] == 1 && completed[i] == false) {
            return false;
        }
    }
    return true;
}

void CourseGraph::printDirectPrerequisites(string course) {
    int idx = getCourseIndex(course);
    if(idx == -1) {
        cout << "Course not found "<<endl;
        return;
    }

    cout << "Prerequisites for " << course << ": ";
    bool found = false;

    for(int i=0;i<size;i++) {
        if(Adj[i][idx] == 1) {
            cout << courses[i] << " ";
            found = true;
        }
    }

    if(found == false) cout << "None";
    cout << endl;
}
