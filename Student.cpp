//
// Created by T10115885 on 11/5/2019.
//

#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() {gpa = 3.0;}

Student::Student(const string &name, int age, double gpa) : Person(name, age), gpa(gpa) {}

double Student::getGpa() const {
    return gpa;
}

void Student::setGpa(double gpa) {
    Student::gpa = gpa;
}

void Student::printMe() {
    cout<<"Im "<<getName()<<" and Im "<<getAge()<<" years old and I have a "<<gpa<<" gpa."<<endl;
}

ostream &operator<<(ostream &os, const Student &student) {
   // os << static_cast<const Person &>(student) << " gpa: " << student.gpa;
   os<<static_cast<const Person &>(student)<<" and I have a "<<student.gpa<<" gpa.";
    return os;
}
