#include <iostream>

// * virtual: dynamic dispatch, V-table:w

// * virtual functions allow us to override methods in subclasses.
// * if you want to override a function, you have to mark the base
//   function in the base class as virtual


class Person {
public:
    virtual std::string foo(){ return "not overridden"; }
}; 


class Man : public Person {
private:
    std::string message ;
public:
    Man(const std::string m) 
        : message(m){} ;
    std::string foo() { return message; }

};

int main(void) {
    
    Person x1 ;
    Man* x2 = new Man("Overridden") ;

    std::cout << x1.foo() << std::endl ;
    std::cout << x2->foo() << std::endl ;

    // * try with and without marking the base foo() as virtual.
    Person* ptr = x2 ;
    std::cout << ptr->foo() << std::endl ;

    return 0;
} // end main
