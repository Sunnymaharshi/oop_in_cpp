#include<iostream>

using namespace std;

class Marks
{
    int science, maths;
    public:
    Marks(int science,int maths){

        this->science = science;
        this->maths = maths;
    }
    friend int avg(Marks marks);  //  declaration of friend function
};

// friend function definition
// friend function scope is global
// we don't using scope resolution operator
int avg(Marks marks)
{
  return (int)((marks.science+marks.maths)/2.0); 
}

/* adding objects of two different classes */ 

// forward declaration
class Number2;

class Number1 {

private:
    int number;
public:
    
    Number1(int num) {

      number = num;
    }

    // friend function declaration
    friend int add(Number1, Number2);
};

class Number2 {

private:
    int number;
public:
    Number2(int num) {

      number = num;
    }

    // friend function declaration
    friend int add(Number1, Number2);
};

// friend fucntion can access members of both classes
int add(Number1 obj1, Number2 obj2) {
    return (obj1.number + obj2.number);
}


int main()
{
  Marks student1(90,93);  
  cout<<"Average marks:" <<avg(student1)<<endl;

  Number1 num1(15);
  Number2 num2(3);
  cout << "Sum: " << add(num1, num2)<<endl;
  return 0;
}
/*
Output:
Average marks:91
Sum: 18
*/