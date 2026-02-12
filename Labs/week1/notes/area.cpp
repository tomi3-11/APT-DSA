#include <iostream>
using namespace std;

int main(){
	/*
	 * Here we are creating a program that calculates the area of a rectangle.
	 * we ask the user for a base, height
	 * Then calculates it using this formula (1/2 * base * height)
	 */
	int base, height; 
	float area;

	cout << "Enter the base: ";
	cin >> base;
	cout << "Enter the Height: ";
	cin >> height;

	area = (0.5) * (float)base * height;

	cout << "The area is " << area << endl;

	return 0;
}
