#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double X1, X2, Y1, Y2, Pi;


double DistanceFormula(double X1, double X2, double Y1, double Y2)
{
	double Distance = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));

	return Distance;
}

double RadiusFormula(double X2, double Y2)
{
	double Radius = sqrt(pow((X2), 2) + pow((Y2), 2));

	return Radius;
}

double CircumferenceFormula(double Pi)
{
	Pi = 3.1416;

	double Circumference = 2 * Pi * RadiusFormula(X2, Y2);

	return Circumference;
}

double AreaFormula(double Pi)
{
	Pi = 3.1416;

	double Area = 2 * Pi * pow(RadiusFormula(X2, Y2), 2);

	return Area;
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

		cout << "\nRadius: " << RadiusFormula(X2, Y2) << endl;

		cout << "\nCircumference: " << CircumferenceFormula(Pi) << endl;

		cout << "\nArea: " << AreaFormula(Pi) << endl;

	return 0;
}