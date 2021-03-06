#include<iostream>
using namespace std;

class AbstractEmployee {

    // pure virtual function
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee{

    // if we don't specify access modifiers, all are private by default
private:
    string Company;
    int Age;
protected:
    string Name;
public:

    // default constructor - automatically generated by compiler
    /*
    Employee(){

    }
    */

    // Parameterized Constructor
    Employee(string name,string company,int Age){
        Name =  name;
        Company = company;
        // if parameter and data member has same name, we can use this keyword
        // to reffer current object data member.
        // 'this' keyword stores address of current object.
        this->Age = Age;
        cout<<"Employee Constructor Called\n";
    }
    
    // Copy Constructor - passing address of employee object
    // automatically generated by compiler
    Employee(Employee& employee){

        this->Company = employee.Company;
        this->Age = employee.Age;
        this->Name = employee.Name;
        cout<<"Copy Constructor called\n";
    }

    // setter methods
    void setName(string name){
        Name = name;
    }
    void setCompany(string company){
        Company = company;
    }
    void setAge(int age){
        if(age>=18)
            Age = age;
    }

    // getter methods
    string getName(){
        return Name;
    }
    string getCompany(){
        return Company;
    }
    int getAge(){
        return Age;
    }

    void IntroduceYourself(){

        cout<<"Name : "<<Name<<endl;
        cout<<"Company : "<<Company<<endl;
        cout<<"Age : "<<Age<<endl;
    }

    // we must implement virtual function
    void AskForPromotion(){

        if(Age>20)
            cout<<Name<<" got promoted!"<<endl;
        else
            cout<<Name<<" no promotion for you"<<endl;
    }

    // by making virtual function, when child class object is referenced with parent
    // class pointer variable, it will check first
    // if there is implementation for this function inside referenced object class
    virtual void Work(){
        cout<<Name<<" is cheking email, task backlog, performing tasks.."<<endl;
    }

};

// Developer class is subclass or child class for Employee class
// public inheritance to access base class attributes and methods outside this class
class Developer:public Employee {

public:
    string FavProgrammingLanguage;

    Developer(string name,string company,int age, string favProgrammingLanguage)
    :Employee(name,company,age){

        FavProgrammingLanguage = favProgrammingLanguage;
        cout<<"Developer Constructor Called\n";
    }

    void FixBugs(){
        cout<<Name<<" fixed bugs using "<<FavProgrammingLanguage<<endl;
    }

    void Work(){
        cout<<Name<<" is writing "<<FavProgrammingLanguage<<" code"<<endl;
    }
};

class Teacher:public Employee{

public:
    string Subject;

    Teacher(string name,string company,int age, string subject):Employee(name,company,age){

        Subject = subject;
        cout<<"Teacher Constructor Called\n";
    }

    void PrepareLesson(){
        cout<<Name<<" is preparing Lesson "<<Subject<<" lesson"<<endl;
    }

    void Work(){
        cout<<Name<<" is teaching "<<Subject<<endl;
    }
};
int main(){

    /* initializing public data members without defining constructor */
    /*
    Employee emp1;
    emp1.Name = "Sunny";
    emp1.Company = "XYZ";
    emp1.Age = 20; 
    */


    // static allocation
    // initializing attributes using constructor
    Employee emp1 = Employee("Sunny","XYZ",20);              // Object creation

    // In this way also we can create objects
    /* Employee emp1("Sunny","XYZ",20); */      
    
    emp1.IntroduceYourself();

    emp1.setAge(21);
    cout<<"Age : "<<emp1.getAge()<<endl;

    emp1.AskForPromotion();

    // dynamic allocation - Heap memory
    Employee *emp2 = new Employee("Sunny","XYZ",20);

    // accessing using object value
    (*emp2).IntroduceYourself();

    // accessing using object address
    emp2->AskForPromotion();

    // copy constructor called
    Employee emp3(emp1);
    emp3.IntroduceYourself();

    Developer d = Developer("Maharshi","XYZ",21,"C++");
    d.FixBugs();
    d.AskForPromotion();

    Teacher t = Teacher("John","PQY",33,"OOP");
    t.PrepareLesson();

    // polymorphism
    emp1.Work();
    d.Work();
    t.Work();


    // most common use of polymorphism is when parent class
    // reference is used to refer to a child class object.
    
    Employee* e1 = &d;
    Employee* e2 = &t;
    
    e1->Work();
    e2->Work();

}
/*
Output:
Employee Constructor Called
Name : Sunny
Company : XYZ
Age : 20
Age : 21
Sunny got promoted!
Employee Constructor Called
Name : Sunny
Company : XYZ
Age : 20
Sunny no promotion for you
Copy Constructor called
Name : Sunny
Company : XYZ
Age : 21
Employee Constructor Called
Developer Constructor Called
Maharshi fixed bugs using C++
Maharshi got promoted!
Employee Constructor Called
Teacher Constructor Called
John is preparing Lesson OOP lesson     
Sunny is cheking email, task backlog, performing tasks..
Maharshi is writing C++ code
John is teaching OOP
Maharshi is writing C++ code
John is teaching OOP
*/