#ifndef WORKER_HPP
#define WORKER_HPP
#include <iostream>
#include <sstream>

using namespace std ; 
class Worker {
private:
    string name; 
    int age; 
    double wage; 
public: 
    Worker(); 
    Worker(string,int, double); 
    ~Worker(); 
    void setName(string); 
    void setAge(int); 
    void setWage(double); 
    string getName(); 
    int getAge(); 
    double getWage(); 
    string toString(); 
    
};


Worker::Worker(string name, int age, double wage) {
    this-> name = name; 
    this-> age = age; 
    this-> wage = wage; 
}
Worker::Worker() {
    this->name = ""; 
    this-> age = 0 ; 
    this-> wage = 0.0; 
}

Worker::~Worker() {
    cout << "person instance was destroyed." << endl ; 
}
void Worker::setName(string name) {
    this->name = name; 
}
void Worker::setAge(int age) {
    this-> age = age ; 
}
void Worker::setWage(double wage) {
    this-> wage = wage;
}

string Worker::getName() {
    return this-> name; 
}
int Worker::getAge() {
    return this-> age; 
}
double Worker::getWage() {
    return this-> wage; 
}

string Worker::toString() {
    stringstream ss ; 
    ss << "name = " << this-> name << endl 
            << "age = " << this-> age << endl 
            << "wage = " << this-> wage << endl ; 
    return ss.str(); 
}


#endif /* WORKER_HPP */

