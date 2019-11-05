//
// Created by T10115885 on 11/5/2019.
//

#ifndef INHEREX_PERSON_H
#define INHEREX_PERSON_H

#include <string>
#include <ostream>

using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person();

    Person(const string &name, int age);

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    virtual void printMe();

    friend ostream &operator<<(ostream &os, const Person &person);
};


#endif //INHEREX_PERSON_H
