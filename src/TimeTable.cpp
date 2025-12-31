#include "Timetable.h"

Timetable::Timetable(){
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            table[i][j]= -1;
        }
    }
}

bool Timetable::addCourse(int day,int slot,int courseID){
    if(table[day][slot]==-1){
        table[day][slot]=courseID;
        return true;
    }
    return false;
}

bool Timetable::hasConflict(int day,int slot){
    if(table[day][slot]!=-1){
        return true;
    }
    return false;
}

void Timetable::assignCourse(int day,int slot,int courseID){
    table[day][slot]=courseID;
}

void Timetable::removeCourse(int day,int slot){
    table[day][slot]= -1;
}

void Timetable::display(){
    cout<<"Timetable:"<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            if(table[i][j]==-1)
                cout<<"- ";
            else
                cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
}

