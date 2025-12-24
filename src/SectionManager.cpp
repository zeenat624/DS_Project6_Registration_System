#include <iostream>
#include "SectionManager.h" 
using namespace std;

    Section::Section(int cap){
        capacity = cap;
        enrolledCount = 0;
    }

    bool Section::enrollStudent(int studentID) {
    if(enrolledCount < capacity){
    	enrolledStudents[enrolledCount] = studentID;
    	enrolledCount++;
    	return true;
	}
	else{
		waitlist.enqueue(studentID);
		cout << "Student " << studentID << " added to waitlist." << endl;
		return false;
	}
    }

    void Section::dropStudent(int studentID) {
    for(int i = 0; i < enrolledCount; i++) {
        if(enrolledStudents[i] == studentID) {
        for(int j = i; j < enrolledCount - 1; j++) {
            enrolledStudents[j] = enrolledStudents[j + 1];
            }
            enrolledCount--;
            cout << "Student " << studentID << " dropped from section." << endl;
            break;
        }
    }
    
    if(waitlist.isEmpty() == false)
	{
    int nextStudent = waitlist.dequeue();
    enrolledStudents[enrolledCount] = nextStudent;
    enrolledCount++; 
	cout << "Student " << nextStudent << " moved from waitlist to enrolled." << endl;   
	}
    }

    void Section::printEnrolled() {
        cout << "Enrolled: ";
        for(int i=0; i<enrolledCount; i++){
            cout << enrolledStudents[i] << " ";        	
		}
        cout << endl;
    }
    
    void Section::printWaitlist(){
    	waitlist.printQueue();
	}

