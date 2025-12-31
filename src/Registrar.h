#ifndef REGISTRAR_H
#define REGISTRAR_H

#include <iostream>
#include "Student.h"
#include "SectionManager.h"

using namespace std;

class Registrar {
private:
    Student students[5];
    int studentCount;
    Section section;

public:
    Registrar();
    int findStudent(int id);
    void menu();
};

#endif
