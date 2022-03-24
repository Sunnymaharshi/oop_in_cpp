#include <iostream>
using namespace std;
 
// Parent class  
// Abstract class as it has pure virtual function
class Shape {

protected:
    int width;
    int height;
public:

    // pure virtual function 
    virtual int getArea() = 0;


    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }   

};
 
// Child classes
class Rectangle: public Shape {

public:
    // we must give implemention to virtual function in child classes
    int getArea() { 
        return (width * height); 
    }
};

class Triangle: public Shape {
   
public:
    // we must give implemention to virtual function in child classes
    int getArea() { 
        return (width * height)/2; 
    }
};
 
int main(void) {
   Rectangle rect;
   Triangle  tri;
 
   rect.setWidth(5);
   rect.setHeight(7);
   cout << "Total Rectangle area: " << rect.getArea() << endl;

   tri.setWidth(5);
   tri.setHeight(7);
   cout << "Total Triangle area: " << tri.getArea() << endl; 

   return 0;
}