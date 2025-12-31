#include "Registrar.h"
#include <iostream>
using namespace std;

Registrar::Registrar() : section(3) {
    studentCount = 5;

    students[0] = Student(1023, "Zeenat");
    students[1] = Student(1024, "Kashaf");
    students[2] = Student(1025, "Meryam");
    students[3] = Student(1026, "Amna");
    students[4] = Student(1027, "Bisma");

    students[0].addCompletedCourse("PF");
    students[1].addCompletedCourse("PF");
    students[1].addCompletedCourse("OOP");
    students[2].addCompletedCourse("PF");
}

int Registrar::findStudent(int id) {
    for(int i = 0; i < studentCount; i++) {
        if(students[i].getId() == id)
            return i;
    }
    return -1;
}

void Registrar::menu() {
    int id, choice;

    cout << "Enter Student ID: ";
    cin >> id;

    int index = findStudent(id);
    if(index == -1) {
        cout << "Student not found!" << endl;
        return;
    }

    cout << "Welcome " << students[index].getName() << endl;


        cout << "1. Register Course"<<endl;
        cout << "2. Drop Course";
        cout << "3. View Completed Courses"<<endl;
        cout << "0. Exit"<<endl;
        cout << "Enter your choice: "<<endl;
        cin >> choice;

        if(choice == 1) {
            section.enrollStudent(id);
        }
        else if(choice == 2) {
            section.dropStudent(id);
        }
        else if(choice == 3) {
            students[index].printCompletedCourses();
        }
        else if(choice == 0){            return;
        }


}
