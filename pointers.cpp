#include <iostream>


void increament_pointer(int* x){ (*x)++; }
void increament_reference(int& x){ x++; }


int main(void) {
    
    // the next three pointers point to null/nothing.
    void* ptr_0 = 0;
    void* ptr_NULL = NULL; // the c way
    void* ptr_nullptr = nullptr; // the cpp way

    std::cout << ptr_0 << std::endl;
    std::cout << ptr_NULL << std::endl;
    std::cout << ptr_nullptr << std::endl;



    std::cout << std::endl;
    // `&` before a variable, means give me your memory address
    int var = 12;
    int* ptr_var = &var;
    *ptr_var = -1;
    std::cout << ptr_var << std::endl;
    std::cout << &var << std::endl;
    // dereferencing a pointer by the `*` operator 
    std::cout << *ptr_var << std::endl;



    std::cout << std::endl;
    // references: a pointer syntactic sugar.
    int m = 0;

    increament_reference(m);
    std::cout << m << std::endl;

    increament_pointer(&m);
    std::cout << m << std::endl;



    return 0;
} // end main
