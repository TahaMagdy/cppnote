#include <iostream>


class Car {

public:
    int year, price, speed;

    // * this is one way to prevent the usage of the default constructor
    // * otherwise make it public
    Car() = delete;

    // * class members are not initialized by default.
    //   You have to initialize them yourself.
    Car(int year) {
        this->year = year; 
    }

    Car(int year, int price) {
        this->year = year;
        this->price = price;
    }

    Car(int year, int price, int speed) {
        this->year = year;
        this->price = price;
        this->speed = speed;
    }


    // * Destructor
    // * if the obj was stack-allocated; then the destructor is called when the scope is ended.
    // * if heap-allocated then delete!

};


int main(void) {

    // * taking instances
    Car c1(12);
    Car c2(1, 2);
    Car c3(9, 2 ,1);


    std::cout << c3.year << std::endl;
    std::cout << c3.price << std::endl;
    std::cout << c3.speed << std::endl;
    
    return 0;
} // end main
