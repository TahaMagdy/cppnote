#include <iostream>

using namespace std;


int main(void) {

    // * sizeof takes a variable or a data type.

    cout << "bool:      " << sizeof(bool) << endl;
    cout << "char:      " << sizeof(char) << endl;
    cout << "short:     " << sizeof(short) << endl;
    cout << "int:       " << sizeof(int) << endl;
    cout << "float:     " << sizeof(float) << endl;
    cout << "double:    " << sizeof(double) << endl;
    cout << "long:      " << sizeof(long) << endl;
    cout << "long long: " << sizeof(long long) << endl;

    // addresses have the same size (Farrag)
    cout << "bool&:     " << sizeof(long&) << endl;
    cout << "bool*:     " << sizeof(bool*) << endl;
    cout << "long*:     " << sizeof(long*) << endl;
    cout << "char*:     " << sizeof(char*) << endl;


    char   c;
    c = 65; // you can give a number for a `char`
    cout << c << endl;
    cout << static_cast<int>(++c) << endl;


    float m = 3.3f; // ??
    cout << sizeof(m) << endl;
    
} // end main
