#include "Registrar.h"
#include <iostream>
using namespace std;

Registrar::Registrar() : section(2) {
    students[0] = Student(1023, "Zeenat");
    students[1] = Student(1024, "Kashaf");
    students[2] = Student(1025, "Meryam");

    students[0].addCompletedCourse("PF");
    students[0].addCompletedCourse("OOP");
    students[1].addCompletedCourse("PF");
    students[2].addCompletedCourse("PF");
}

void Registrar::studentMenu() {
    int id;
    cout << "Enter Student ID: ";
    cin >> id;

    int index = -1;
    for(int i=0;i<3;i++) {
        if(students[i].getId() == id)
            index = i;
    }

    if(index == -1) {
        cout << " Student not found."<<endl;
        return;
    }

    cout << "Welcome " << students[index].getName() << endl;
    cout << "1. Register Course "<<endl;
    cout << "2. Drop Course"<<endl;
    cout<<" Enter your choice"<<endl;

    int choice;
    cin >> choice;

    if(choice == 1) {
        string course;
        cout << "Enter course name: ";
        cin >> course;

        string completed[5];
        int completedCount = students[index].getCompletedCount();
        for(int i=0;i<completedCount;i++)
        completed[i] = students[index].getCompletedCourse(i);

        int courseIdx = graph.getCourseIndex(course);
        if(courseIdx == -1) {
                cout << "Course not found." << endl;
            }

        if(graph.canTakeCourseDFS(courseIdx, completed, completedCount)) {

            if(section.enrollStudent(id)) {
                cout << "Course registered successfully."<<endl;
            }
            else {
                cout << "Section full. Added to waitlist."<<endl;
            }

        } else {
            cout << " Cannot register. Prerequisite not fulfilled."<<endl;
        }
    }

    else if(choice == 2) {
        section.dropStudent(id);
    }
}
