//
// Created by T10115885 on 11/5/2019.
//

#include <iostream>
using namespace std;
#include "Person.h"

Person::Person() {
    name = "none";
    age = 17;
}

Person::Person(const string &name, int age) : name(name), age(age) {}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

void Person::printMe(){
    cout<<"My name is "<<name<<" and I'm "<<age<<" years old."<<endl;
}

ostream &operator<<(ostream &os, const Person &person) {
   //os << "name: " << person.name << " age: " << person.age;
    os<<"My name is "<<person.name<<" and I'm "<<person.age<<" years old.";
    return os;
}


