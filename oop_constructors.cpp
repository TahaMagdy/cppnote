#include <iostream>
using namespace std;

class Point {

private:
    double x_member, y_member;
public:
    double get_x() {return x_member;}
    double get_y() {return y_member;}


	// Constructor
	// * member initialization list syntax
	// this is a three different constructors.
	// 1 Point()
	// 2 Point(x)
	// 3 Point(x,y)
	// * It is important when you want to init a const member,
	//   then you cannot init with assignment.
	// * const int x; this is valid only in classes
	//   because it is the job of the constructor of init the objects.
	Point(double x=0.0, double y=0.0):
		x_member(x),
		y_member(y){};

}; // end class Point




int main(void) {
    
	// * using the defualt constructor.

	Point point1;
	cout << point1.get_x() << ',' << point1.get_y() << endl;

	Point point2 = Point();
	cout << point2.get_x() << ',' << point2.get_y() << endl;

	// * using overloaded constructor

	Point point3 = Point(1);
	cout << point3.get_x() << ',' << point3.get_y() << endl;

	Point point4 = Point(9, 3);
	cout << point4.get_x() << ',' << point4.get_y() << endl;


    // * Heap

    int *x = new int(9);
    cout <<  x << endl;
    cout << *x << endl;

    delete x;
    cout <<  x << endl;
    cout << *x << endl;


	
    return 0;
} // end main
