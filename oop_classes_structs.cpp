#include <iostream>

// classes and structs are the same in c++
// the only difference is that
//      * classes' members are private by default.
//      * stucts'  members are public  by default.

class Player_class {
// * By default all variables memebers are private
//   if you didn't specify.

public:
    int x, y, speed;


    void move(int x, int y) {
       // * this is a pointer, so we only can access obj   members by (->)
       // * while with actual obj variables  we can access memebrs by (.)
       this->x += x;
       this->y += y;
    }
}; 

struct Player_struct {
// struct's members are public by default
    int x, y, speed;

    void move(int x, int y) {
       this->x += x;
       this->y += y;
    }
}; 

int main(void) {
    
    // * making an instace of a class
    Player_class  p1;
    p1.x = 12;
    p1.y = 11;
    p1.speed = 9;

    p1.move(100, 200);
    std::cout << p1.x << std::endl;
    std::cout << p1.y << std::endl;

    std::cout <<std::endl;
    // * making an instace of a class
    Player_struct p2;
    p2.x = 12;
    p2.y = 11;
    p2.speed = 9;

    p2.move(100, 200);
    std::cout << p2.x << std::endl;
    std::cout << p2.y << std::endl;

    return 0;
} // end main
