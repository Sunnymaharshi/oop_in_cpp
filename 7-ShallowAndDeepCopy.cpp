#include<iostream>
#include<string.h>
using namespace std;
class Person {

public:
    char *name;

    // default constructor
    Person(){

        name = new char[20];
    }

    // copy constructor - deep copy
    Person(Person& person){

        /* value is copied into new memory location and assigned to this object name */
        // new char array is created
        char *temp =  new char[strlen(person.name)+1];
        // copy name into this new temp char array
        strcpy(temp,person.name);
        // assign new temp char array to this object name
        this->name = temp;
    }


    void setName(char name[]){
        strcpy(this->name,name);
    }

    void print(){
        cout<<this->name<<endl;
    }
};

int main(){

    Person A;
    char name[6] = "Sunny";
    A.setName(name);

    /* 
        comment deep copy constructor to use default copy constructor
        uncomment deep copy constructor to use deep copy constructor 
    */
    // using default copy constructor - shallow copy
    Person B(A);
    cout<<"B after shallow copy\n";
    B.print();

    A.name[0] = 'B';
    // both objects name refer to same memory location, both names are changed
    cout<<"A and B after modifying A in shalow copy\n";
    A.print();          // Bunny
    B.print();          // Bunny
    cout<<endl;

    
    Person P;
    P.setName(name);

    // using deep copy constructor
    Person Q(P);
    cout<<"Q after deep copy\n";
    Q.print();

    P.name[0] = 'B';
    // both objects name refer to different memory locations, only P name is changed
    cout<<"P and Q after modifying P in deep copy\n";
    P.print();          // Bunny
    Q.print();          // Sunny

}
