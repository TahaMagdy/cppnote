#include <iostream>


// * to compile: $ g++ static.cpp quran.cpp

int main(void) {
    

    extern const char* aya;
    extern const char* sura;

    std::cout << aya << std::endl;
    std::cout << sura << std::endl;
    return 0;
} // end main
