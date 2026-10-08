#include<iostream>
using namespace std;

float area(float radius)
{
	return 3.1415 * radius * radius;
}
float area(float length, float breath)
{
	return length * breath;
}
int area(int side)
{
	return side * side;
}

int main()
{
	float radius, length, breadth;
	int side;
	
	cout << "Enter radius of circle: ";cin >> radius;
	cout << "Area of circle: " << area(radius);
	
	cout << "\nEnter length and breadth of rectangle: ";cin >> length >> breadth;
    cout << "Area of Rectangle: " << area(length, breadth);
    
    cout << "\nEnter side of square: ";cin >> side;
    cout << "Area of Square: " << area(side);

}
