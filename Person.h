#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
    
    private:
    string name;
    int id;


    public:

    Person(string n, int _id);

    Person();
    ~Person();


    string getName();
    void setName(string n);


    int getId();
    void setId(int _id);

    void display(); 
};


#endif
