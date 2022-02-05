#include <iostream>
#include "Length.h"
using namespace std;

int main()
{
	Length first(0), second(0), third(0);
	int f, i;
	cout << "Enther a distance in feet and inches: ";
	cin >> f >> i;
	first.setLength(f, i);

	cout << " Enther another distance in feet and inches: ";
	cin >> f >> i;
	second.setLength(f, i);

	// third = first + second;
	third = first + second;  //third = operator+(first, second)
	cout << "first + second = ";
	cout << third.getFeet() << " feet, " << third.getInches() << " inches. " << endl;


	// third = first - second;
	third = first - second;  //third = operator-(first, second)
	cout << "first - second = ";
	cout << third.getFeet() << " feet, " << third.getInches() << " inches. " << endl;
	
	// third = first < second;
	cout << "\nfirst < second  \n";
	if (first < second)
	{
		cout << "true";
	}
	else cout << "false";
	
	// third = first > second;
	cout << "\nfirst < second  \n";
	if (first > second)
	{
		cout << "true";
	}
	else cout << "false";

	// third = first > second;
	cout << "\nfirst == second  \n";
	if (first == second)
	{
		cout << "true";
	}
	else cout << "false";


	cout << "\n\n Test prefix and postfix increment\n";
	cout << first.getFeet() << " feet, " << first.getInches() << " inches. " << endl;
	cout << second.getFeet() << " feet, " << second.getInches() << " inches. " << endl;

	first++;
	++second;
	 cout << first.getFeet() << " feet, " << first.getInches() << " inches. " << endl;
	 cout << second.getFeet() << " feet, " << second.getInches() << " inches. " << endl;

	 cout << "\n Testing output operator\n";
	 cout << first << " " << second << " " << third;


	return 0;
}