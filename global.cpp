#include <iostream>

// If a global variable and a local variable have the same name, all
// references to that variable name inside the code block in which the local
// variable is declared will refer to that local variable and have no effect on the
// global variable.  This can be convenient, but forgetting it can cause your
// program to act strangely, even though it looks correct.


// * global value
std::string x = "Global Value";

void foo(){std::cout << x << std::endl;}

int main(void) {
    
    // * local variable
    std::string x = "Local Value";

    std::cout << x << std::endl;
    foo();

    return 0;
} // end main
