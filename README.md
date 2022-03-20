# OOP Notes

- Object Oriented Programming
    - OOP used to represent real world entities.
    - with characteristics and behaviours.
- Class
    - Classes are building block of OOP.
    - User defined data type.
    - Class is blueprint of Object.
- Object
    - instance of class.
- Access modifiers
    - private, public and protected.
    - Everything inside class is private by default.

- Constructor
    - It is special type of method that is invoked each time object is created.
    - If you don't create a constructor, compiler automatically creates a default constructor.
    - It has same name as class without any return type.
    - In most cases it should be public.
    - If we create our own constructor, default constructor is removed.
    - copy constructor
        - It is a member function that initializes an object using another object of same class.
        - default copy constructor does shallow copy.
        - B = A; A,B are objects of same class
        - shallow copy
            - object B points to objects A's location in memory.
        - deep copy 
            - all things in object A's memory location get copied to object B's 
            memory location.
    - 'this' keyword stores address of current object.

- Destructor
    - Automatically called at end of lifetime of an object.
    - Frees the acquired resources.
- 4 pillars of OOP
    - Encapsulation
        - Tying data and methods that operate on that data together.
        - data and methods grouped within a class.
        - To prevent anything outside of class access our data or modify our data.
        - getter and setter methods used to access and modify our data.
        - with getter and setter methods we can add our own logic to access and modify the data which user can't see.
        - Information hiding through Access modifiers.
        - problems solved at implementation level.
    - Abstraction
        - Hiding complex things behind a procedure that make those things look simple.
        - showing only relevant details.
        - problems solved at design or interface level.
        - complexities are hidden using abstract class and interfaces.
        - Abstract class 
            - It cannot be Instantiated.
            - Can have both abstract and non abstract methods.
        - Interface
            - 100% abstraction.
            - specifies what class must do.
            - all methods are abstract by default.


    - Inheritance
        - child class gets all public and protected attributes and methods of parent class.
        - Code Reusability.
    - Polymorphism
        - Many Forms
        - Used when parent class reference is used to refer to a child class object.
        - make function in base class virtual to refer same function in child classes.
        - Method Overloading
            - same name, different parameters.
        - Method Overriding
            - redefining super class method in subclass.
            - run time polymorphism.
        - method overloading is static polymorphism. 
        - method overriding is dynamic polymorphism.
        - virtual function
            - function declared in base class and
            must be overridden in child class.
