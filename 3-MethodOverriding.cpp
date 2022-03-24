#include<iostream>
using namespace std;

class Employee {

public:
    void work(){
        cout<<"Working\n";
    }

    virtual void eat(){
        cout<<"Employee eating\n";
    }
};

class Developer : public Employee {

public:
    // overriding parent class method in child class
    // it must have same name and same arguments
    void work(){

        cout<<"Coding\n";
    }

    void eat(){
        cout<<"Developer eating\n";
    }
};

int main(){

    Employee emp;
    Developer dev;
    // As we are using objects
    // function overriding works fine in both case
    emp.work();
    emp.eat();
    dev.work();
    dev.eat();

    // pointer of type parent class points to child class object
    // virtual function eat is overridden but work method is not overridden
    Employee* p = &dev;
    p->work();
    p->eat();

    return 0;
}
/*
Output:
Working
Employee eating
Coding
Developer eating
Working
Developer eating
*/