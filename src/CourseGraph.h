#ifndef COURSEGRAPH_H
#define COURSEGRAPH_H

#include <string>
using namespace std;

class CourseGraph {
private:
    int size;
    int Adj[5][5];
    string courses[5];

public:
    CourseGraph();

    int getCourseIndex(string course);

    bool canTakeCourseDFS(int courseIdx, string completed[], int completedCount);

    void printDirectPrerequisites(string course);
};

#endif
