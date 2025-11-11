#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;


class Course {
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;

    public:
    void addStudent(const Student& s);
    void displayCourseInfo();
};


#endif
