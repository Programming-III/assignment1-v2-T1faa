#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;

class Instructor : public Person {

    private:
    string department;
    int experienceYears;

    public:

    Instructor();
    ~Instructor();

    Instructor(string dep, int years, string n, int _id) : Person(n, _id){};

    string getDepartment();
    void setDepartment(string m);

    int getExperienceYears();
    void setExperienceYears(int x);
    
    void display();
};


#endif
