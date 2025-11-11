#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
using namespace std;


class Student : public Person {
    private:
    
    int yearLevel;
    string major;


    public:

    Student();
    ~Student();

    Student(int year, string m, string n, int _id) : Person(n, _id){};
    

    int getYearLevel();
    void setYearLevel(int x);

    string getMajor();
    void setMajor(string m);

    void display();
};



#endif
