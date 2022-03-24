#include<iostream>
using namespace std;

class Person
{

public:
    int a;    
    // constructor
    Person(){
        cout<<"Constructor called\n";
    }
    // destructor
    ~Person(){
        cout<<"Destructor called\n";
    }
};
int main(){

    // static allocation - destructor is called manually for statically created object.
    Person p;

    // dynamic allocation
    Person *s = new Person();
    // call destructor manually for dynamically created object
    delete s;


}
/*
Output:
Constructor called
Constructor called
Destructor called
Destructor called
*/

