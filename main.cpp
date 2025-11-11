#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
Person :: Person(){

}

Person :: ~Person(){

}

Person :: Person(string n, int _id){
    name = n;
    id = _id;
}

string Person :: getName(){
    return name;
}

void Person :: setName(string n){
    name = n;
}

int  Person :: getId(){
    return id;
}

void Person :: setId(int _id){
    id = _id;
}

void Person :: display(){
    cout << name << " (ID: " << id << ")";
}


// ==================== Student Class Implementation ====================


Student :: Student(){

}

Student :: ~Student(){

}

Student :: Student(int year, string m, string n, int id) : Person(n, id){
    yearLevel =  year;
    major = m;
}


int Student :: getYearLevel(){
    return yearLevel;
}

void Student :: setYearLevel(int x){
    yearLevel = x;
}

string Student :: getMajor(){
    return major;
}

void Student :: setMajor(string m){
    major = m;
}

void Student :: display(){
    cout << "Name: " << getName() << endl <<  "Year: " << yearLevel << endl << "Major: " << major << endl;
}

// ==================== Instructor Class Implementation ====================


Instructor :: Instructor(){

}

Instructor :: ~Instructor(){

}

Instructor :: Instructor(string dep, int years, string n, int _id) : Person(n, _id){
    department = dep;
    experienceYears = years;
}

string Instructor :: getDepartment(){
    return department;
}

void Instructor :: setDepartment(string m){
    department = m;
}

int Instructor :: getExperienceYears(){
    return experienceYears;
}

void Instructor :: setExperienceYears(int x){
    experienceYears = x;
}

void Instructor :: display(){
    cout << "Name: " << getName();
}



// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
