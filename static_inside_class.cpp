#include <iostream>

class Someclass {
public:
    static void foo(const char* message) {std::cout << message << std::endl;}

}; 
int main(void) {

    Someclass().foo("hello");
    Someclass::foo("hello");
    
    return 0;
} // end main
