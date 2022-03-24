# OOP in C++ Notes

- ## Object Oriented Programming
    - OOP used to represent real world entities
    - with characteristics and behaviours.
- ## Class
    - Classes are building block of OOP.
    - User defined data type.
    - Class is blueprint of Object.
    - Class contains data members and member functions.
    - when class is defined no memory is allocated.
- ## Object
    - instance of class.
    - when object is created memory is allocated.
    - 'this' keyword stores address of current object.

- ## 4 pillars of OOP
    - ### Encapsulation
        - wrapping up data and functions that operate on that data together.
        - data and methods grouped within a class.
        - fully encapsulated class is class with all data members are private.
        - getter and setter methods used to access and modify our data.
        - with getter and setter methods we can add our own logic to access and modify the data which user can't see.
        - **Information hiding**.
        - solves issues at implementation level.
        - Encapsulated code is better for unit testing.
    - ### Abstraction
        - Hiding complex things behind a procedure that make those things look simple.
        - showing only relevant details.
        - **implementation hiding**.
        - solves an issue at design level.
        - example: when we click on capture button in camera, an image is created how the image is captured and saved is hidden from you.
        - Secures the application by not allowing user to see implementation details.
            
    - ### Inheritance
        - it is a mechanism in which a class acquires attributes and methods from another class.
        - child class gets all public and protected attributes and methods of parent class.
        - code reusability.
        - **IS-A**  relationship.
        - Types of Inheritance:
            - Single
                - child class inherit single parent class.
            - Multiple
                - child class inherit from multiple parent classes.
                - inheritance Ambiguity comes if multiple parent classes have method with same name.
                - to resolve ambiguity, we've scope resolution operator.
                - childObj.ParentObj::func().
            - Multi-level
                - child class inherit from another
                child class.
            - Hierarchical
                - more than one child class is inherit from single parent class.
            - Hybrid
                - combination of more than one type of inheritance.

                
    - ### Polymorphism
        - Many Forms
        - ability to present same thing in different forms.
        - Compile time or static polymorphism
            - Method Overloading
                - same name, different arguments.
                - different in no of arguments.
                - different in type of arguments.
            - Operator overloading
                - changing operation of an operator.
        - Run time or dynamic polymorphism.
            - Method Overriding
                - possible only through inheritance.
                - redefining parent class method in child class.
            - virtual function
                - it is a member function in the base class and it is also redefined in child class.
                - virtual keyword ensures function is overridden especially when
                pointer of type parent class points to child class object.
            - pure virtual function
                - it can only be declared, not defined.
                - no function body
                - declare function with "=0;"
                - must be redefined in child class.
                
- ## Access modifiers
    - public, protected and private.
    - Everything inside class is private by default.
    - ### public
        - can be accessed from anywhere in the program.
        - outside the class, in another class, in child class.
    - ### protected
        - can be accessed by any child class.
        - can be accessed outside with the help of friend class.
        - can't access outside the class.
    - ### private
        - can be accessed only inside the class.
        - only member functions and friend functions can access.
- ## Friend functions
    - friend function is a function that is specified outside a class but can access the class private and protected data of classes in which it is declared as friend.
    - friend functions are not member functions
    - scope not limited to particular class.
    - we do not use objects to call friend functions.
- ## Constructor
    - It is special type of method that is invoked each time object is created.
    - If you don't create a constructor, compiler automatically creates a default constructor.
    - It has same name as class without any return type.
    - In most cases it should be public.
    - If we create our own constructor, default constructor is removed.
- ## Destructor
    - Automatically called at end of lifetime of statically created object.
    - We should invoke Destructor manually for dynamically created object.
    - used to deallocate the memory.
    - Frees the acquired resources.
- ## Copy Constructor
    - It is a member function that initializes an object using another object of same class.
    - default copy constructor does shallow copy.
    - B = A; A,B are objects of same class
    - shallow copy
        - object B points to objects A's location in memory.
    - deep copy 
        - all things in object A's memory location get copied to object B's 
        memory location.

- ## Concrete Classes.
    - Classes that can be used to instantiate objects.

- ## Abstract class 
    - reffered as ABC
    - must have atleast one pure virtual function.
    - Can have both abstract and non abstract methods.
    - It cannot be Instantiated.
    
- ## Interface
    - It is created using abstract class.
    - defines behaviours of a class without providing implementation. 
    - it has only pure virtual functions.
    - It cannot be Instantiated.
    

<br />
<br />
<br />
<br />
Source:Internet