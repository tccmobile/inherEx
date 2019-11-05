#include <iostream>
#include <vector>
using namespace std;
#include "Person.h"
#include "Student.h"

int main() {


    vector<Person *> classRoom(0);


    classRoom.push_back(new Person());
    classRoom.push_back(new Student());
    classRoom.push_back(new Student("Mary",30,3.75));
    classRoom.push_back(new Person("Will",52));
    classRoom.push_back(new Student("Carl",77,2.6));

    for (int i = 0; i < classRoom.size(); ++i) {
        classRoom.at(i)->printMe();
    }


    /*Student one;
    one.printMe();

    Student two("Bob",42,3.5);
    two.printMe();


    cout<<one<<endl;
    cout<<two<<endl;


    Student* studentPtr = new Student("Bob",52,3.75);

    studentPtr->printMe();

    cout<< *studentPtr<<endl;

    Person* personPtr = new Student("Sue",23,4.0);

    personPtr->printMe();
*/

}