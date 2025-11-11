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

    Course();
    ~Course();

    Course(string code, string name, int max, Student* stud, int current);

    string getCourseCode();
    void setCourseCode(string m);

    string getCourseName();
    void setCourseName(string m);

    int getMaxStudents();
    void setMaxStudents(int x);

    Student* getStudents();
    void setStudents(Student* x);

    int getCurrentStudents();
    void setCurrentStudents(int x);


    void addStudent(const Student& s);
    void displayCourseInfo();
};


#endif
