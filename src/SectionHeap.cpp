#include "SectionHeap.h"

SectionHeap::SectionHeap() {
    size = 0;
}

void SectionHeap::addSection(Section* s) {
    sections[size] = s;
    minHeapifyUp(size);
    size++;
}

void SectionHeap::minHeapifyUp(int index) {
    while(index > 0) {
        int parent = (index - 1) / 2;

        if(sections[parent]->getEnrolledCount() > sections[index]->getEnrolledCount()) {
            swap(sections[parent], sections[index]);
            index = parent;
        }
        else {
            break;

         }
}
}

void SectionHeap::minHeapifyDown(int index) {
    while(true) {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int smallest = index;

        if(left < size && sections[left]->getEnrolledCount() < sections[smallest]->getEnrolledCount()){
            smallest = left;
        }

        if(right < size && sections[right]->getEnrolledCount() < sections[smallest]->getEnrolledCount()){
            smallest = right;
        }

        if(smallest != index) {
            swap(sections[index], sections[smallest]);
            index = smallest;
        } else {
            break;
        }
   }
}

void SectionHeap::enrollStudent(int studentID) {
    if(size == 0) {
        return;
    }


    sections[0]->enrollStudent(studentID);
    minHeapifyDown(0);
}

void SectionHeap::printEnrolled() {
    for(int i = 0; i < size; i++) {
        cout << "Section " << i + 1 << ": ";
        sections[i]->printEnrolled();
    }
}
void SectionHeap::printWaitlist() {
    for(int i = 0; i < size; i++) {
        cout << "Section " << i + 1 << ": ";
        sections[i]->printWaitlist();
    }
}

