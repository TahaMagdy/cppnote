#include <iostream>

// * interfaces are just classes in c++
// * c++ does not have the keyword `interface`

class Person {

public:
    // * `= 0` means it's pure virtual function
    //   and the subclass must inplement it.
    virtual void foo() = 0;
    //virtual void goo() = 0;
}; 

class Man : public Person {

public:
    void foo() {std::cout << "Overridden" << std::endl;}

};

//////////
// Polymorphism
class Printable {
// this is sum type that support "getName()"
public:
    virtual std::string getName() = 0;
};

class A : public Printable {
public:
    std::string getName() {return "Class: A";}
};

class B : public Printable {
public:
    std::string getName() {return "Class: B";}
};


// * I notice that Polymorphism cannot be done without * a pointer;
// * Any class that is Printable "Implement all methods in Printable Class"
//   can be passed to this function. And each will act with the overridden
//   behaviour.

// * Be case some class implement interface, it means that class is
//   guaranteed to have the pure virtual functions.
// * So, a function of type pointer*`interface` can operate on
//   any class that implements the `interface`
void printTheClassName(Printable* class_) {
    std::cout << class_->getName() << std::endl;
}
///////////

// * an interface
class Functor { public: virtual void map() = 0 ; }; 

class List : public Functor {
public:
    void map() { std::cout << "Map of a list" << std::endl;}
};

class Tree : public Functor {
public:
    void map() { std::cout << "Map of a Tree" << std::endl;}
};

// * polymorphic functions
void applyMap(Functor* f) { f->map() ; }


int main(void) {

    List* list = new List() ;
    Tree* tree = new Tree() ;

    applyMap(list) ;
    applyMap(tree) ;
    
    
    // * Man have to impalement all the virtual functions
    //   to be able to instantiate it.
    Person* m1 = new Man();
    Man* m2 = new Man();
    Man m3;

    std::cout << std::endl;
    A* a_class = new A();
    B* b_class = new B();

    printTheClassName(a_class);
    printTheClassName(b_class);

    return 0;
} // end main
