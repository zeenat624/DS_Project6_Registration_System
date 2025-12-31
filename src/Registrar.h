#ifndef REGISTRAR_H
#define REGISTRAR_H

#include "Student.h"
#include "SectionManager.h"
#include "CourseGraph.h"

class Registrar {
private:
    Student students[3];
    Section section;
    CourseGraph graph;

public:
    Registrar();
    void studentMenu();
};

#endif
