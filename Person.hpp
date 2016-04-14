#ifndef PERSON_HPP
#define PERSON_HPP
#include <iostream>
#include <sstream>

using namespace std ; 
class Person {
private:
    string name; 
    int age; 
    double wage; 
public: 
    Person(); 
    Person(string,int, double); 
    ~Person(); 
    void setName(string); 
    void setAge(int); 
    void setWage(double); 
    string getName(); 
    int getAge(); 
    double getWage(); 
    string toString(); 
    
};


Person::Person(string name, int age, double wage) {
    this-> name = name; 
    this-> age = age; 
    this-> wage = wage; 
}
Person::Person() {
    this->name = ""; 
    this-> age = 0 ; 
    this-> wage = 0.0; 
}

Person::~Person() {
    cout << "person instance was destroyed." << endl ; 
}
void Person::setName(string name) {
    this->name = name; 
}
void Person::setAge(int age) {
    this-> age = age ; 
}
void Person::setWage(double wage) {
    this-> wage = wage;
}

string Person::getName() {
    return this-> name; 
}
int Person::getAge() {
    return this-> age; 
}
double Person::getWage() {
    return this-> wage; 
}

string Person::toString() {
    stringstream ss ; 
    ss << "name = " << this-> name << endl 
            << "age = " << this-> age << endl 
            << "wage = " << this-> wage << endl ; 
    return ss.str(); 
}


#endif /* PERSON_HPP */

