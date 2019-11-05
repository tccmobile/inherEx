//
// Created by T10115885 on 11/5/2019.
//

#ifndef INHEREX_STUDENT_H
#define INHEREX_STUDENT_H

#include <ostream>
#include "Person.h"


class Student: public Person {
private:
    double gpa;
public:
    Student();

    Student(const string &name, int age, double gpa);

    double getGpa() const;

    void setGpa(double gpa);

    void printMe() override;

    friend ostream &operator<<(ostream &os, const Student &student);

};


#endif //INHEREX_STUDENT_H
