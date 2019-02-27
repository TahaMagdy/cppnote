#include <iostream>

class Car {

public:
    int m;
};

class BMW : public Car {

    int k = m;

};

int main(void) {
    
    Car x;
    x.m++;

    return 0;
} // end main
