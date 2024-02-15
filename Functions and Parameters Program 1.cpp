#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double X1, X2, Y1, Y2;

double DistanceFormula(double X1, double X2, double Y1, double Y2)
{
	double Distance;

	Distance = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));

	return Distance;
}


int main()
{
 
	DistanceFormula(X1, X2, Y1, Y2);

	cout << "Welcome to the Distance, Radius, Circumference, and Area calculator.\n" << endl;
	cout << "Please enter the value for X1: ";
		cin >> X1;

	cout << "\nPlease enter the value for X2: ";
		cin >> X2;

	cout << "\nPlease enter the value for Y1: ";
		cin >> Y1;

	cout << "\nPlease enter the value for Y2: ";
		cin >> Y2;

		cout << "\nDistance: " << DistanceFormula(X1, X2, Y1, Y2) << endl;

	return 0;
}