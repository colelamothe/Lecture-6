// Lecture 6 programming examples

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//Variable declaration
	const double Pi = 3.14159;

	const int MAX_VALUE = 10; // use upper case for constant variables

	auto name = "Cole"; // automatically declares variable type as a string by detection
	auto facts = true; // automatically detects boolean data type

	//changing between data types

	int value1 = 10; // Starts as an int for 4 Bytes
	double value2 = value1; // becomes double at 8 Bytes

	cout << value2 << endl; // outputs 10.0 to represent the fractional portion of the number that now exists.
	
	double value3 = 10.50; // starts as a double with a fractional component
	int value4 = value2; // converts to an int with no fractional component. Fraction is truncated.

	cout << value4 << endl; // Outputs 10 since the fractional 0.5 was truncated.

	//Arithmetic operators

	cout << 5 % 2 << endl; // returns remainder of division. 5/2 = 4 with 1 leftover. Returns 1
	cout << 5 * 2 << endl; // multiplies 5 x 2 = 10
	cout << 5 / 2 << endl; // divides integer 5 by integer 2 and returns the integer value 2. Does not calculate the fractional component
	cout << 5 + 2 << endl; // simple addition
	cout << 5 - 2 << endl; // simple subtraction

	int val1 = 7;
	int val2 = 2;

	double r = val1 / val2;
	cout << r << endl; // outputs integer value only

	double val4 = 2;
	r = val1 / val2;  
	cout << r << endl; //outputs with the fractional component

	cout << pow(val2, 2) << endl; //=2^2 but only if #include <cmath> is in program initialization.





	system("pause");
	return 0;
}