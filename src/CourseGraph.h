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

    bool canTakeCourse(string course, bool completed[5]);

    void printDirectPrerequisites(string course);
};

#endif
