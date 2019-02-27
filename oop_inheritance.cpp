#include <iostream>

class Person {

public:
    std::string fisrtName, secondName;
    void say() {std::cout << "Hello, I'm a person" << std::endl;}
};

// * you must put the public while inheriting
class Employee : public Person{
public:
    int backAccount;
};

int main(void) {

    Employee x;
    x.backAccount = 12;
    x.fisrtName   = "Taha";
    x.secondName  = "Magdy";

    
    return 0;
} // end main
