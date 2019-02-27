#include <iostream>
using namespace std;

// * Creating some types
// each values is enumerated from zero
enum Grads {Excellent, Good, Medium, Bad}; 

// * overloading the increment operator to match the Grad type.
inline Grads operator++(Grads x) {
    return static_cast<Grads>((static_cast<int>(x) + 1) % 4);
}


// * overloading the out stream operator to print the Grad values.
inline ostream& operator<<(ostream& out, const Grads& x) {

    switch(x) {
        case Excellent: out << "Excellent"; break;
        case Good:      out << "Good"; break;
        case Medium:    out << "Medium"; break;
        case Bad:       out << "Bad"; break;
    } // end switching

    return out;
} 

// * specifying a type of the value of the enum
// Enum has to be integer numbers; they are ordering-numbers.
// cannot be float.
enum Things_1 : unsigned int {Taha_1, Magdy_1, Huda_1, Nura_1, Mona_1};
enum Things_2 : char {Taha_2, Magdy_2, Huda_2, Nura_2, Mona_2};
// enum Things_2 : float        {Taha, Magdy, Huda, Nura, Mona}; // invalid

int main(void) {

    // * Enumeration
    Grads x;
    x = Bad;
    cout << ++Excellent << endl;
    cout << ++Good<< endl;
    cout << ++x<< endl;
    
    return 0;
} // end main
