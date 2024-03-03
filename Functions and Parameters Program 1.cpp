#include <iostream>
#include <cmath>

//Calculator for finding Distance, Radius, Circumference, and Area.
//User only needs to input coordinates for X1, X2, Y1, and Y2.
//Output will be all four answers using the formulas behind the scenes by calling each needed function.

using namespace std;

double calcDistance(double X1, double X2, double Y1, double Y2); //Pre-Condition: Input coordinates from user. Post-Condition: The distance between two points.

double calcRadius(double X2, double Y2); //Pre-Condition: Uses X2 and Y2 coordinates as input where needed. Post-Condition: Shows radius of the two points.

double calcCircumference(double Pi); //Pre-Condition: Calls the Radius formula for input into formula. Post-Condition: Shows circumference.

double calcArea(double Pi); //Pre-Condition: Calls the Radius formula and input into the Area formula. Post-Condition: Shows Area.

int main()
{
	double X1, X2, Y1, Y2, Pi;

	cout << "Welcome to the Distance, Radius, Circumference, and Area calculator.\n" << endl;
	cout << "Please enter the value for X1: ";
		cin >> X1;

	cout << "\nPlease enter the value for X2: ";
		cin >> X2;

	cout << "\nPlease enter the value for Y1: ";
		cin >> Y1;

	cout << "\nPlease enter the value for Y2: ";
		cin >> Y2;

		cout << "\nDistance: " << calcDistance(X1, X2, Y1, Y2) << endl;

		cout << "\nRadius: " << calcRadius(X2, Y2) << endl;

		cout << "\nCircumference: " << calcCircumference(Pi) << endl;

		cout << "\nArea: " << calcArea(Pi) << endl;

	return 0;
}

double calcDistance(double X1, double X2, double Y1, double Y2)
{
	double Distance = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));

	return Distance;
}

double calcRadius(double X2, double Y2)
{
	double Radius = sqrt(pow((X2), 2) + pow((Y2), 2));

	return Radius;
}

double calcCircumference(double Pi, double X2, double Y2)
{
	Pi = 3.1416;

	double Circumference = 2 * Pi * calcRadius(X2, Y2);

	return Circumference;
}

double calcArea(double Pi, double X2, double Y2)
{
	Pi = 3.1416;

	double Area = Pi * pow(calcRadius(X2, Y2), 2);

	return Area;
}