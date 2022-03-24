#include<iostream>
using namespace std;
class Int {

private:
    int value;
public:
    Int(int value){
        this->value = value;
    }

    // subtraction using + operator
    // object before + act as current object i.e 'this'
    // object after + goes into function argument
    int operator + (Int obj){

        return this->value - obj.value;
    }

    // multiplication using - operator
    int operator - (Int obj){

        return this->value * obj.value;
    }
};
int main(){

    Int a(10);
    Int b(3);
    // a is current object
    // b goes into overloaded function argument
    cout<<"Subtraction using + operator :"<< a + b<<endl;
    cout<<"Multiplication using - operator :"<< a - b<<endl;
}

/*
Output:
Subtraction using + operator :7    
Multiplication using - operator :30
*/