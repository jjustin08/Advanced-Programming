#include "Length.h"

Length operator+(Length a, Length b)
{
	return Length(a.len_inches + b.len_inches);
}
Length operator-(Length a, Length b)
{
	return Length(a.len_inches - b.len_inches);
}

bool operator<(Length a, Length b)
{
	return a.len_inches < b.len_inches;
}

bool operator>(Length a, Length b)
{
	return a.len_inches > b.len_inches;
}

bool operator==(Length a, Length b)		
{
	return a.len_inches == b.len_inches;
}

Length Length::operator++() // Prefix mode
{
	// ++b; increment b first
	len_inches++;
	return *this;
}

Length Length::operator++(int)
{
	Length temp = *this;
	len_inches++;
	return temp;
}

ostream& operator<<(ostream& out, Length a)
{
	out << "This is my measurments: " <<a.getFeet() << " feet, " << a.getInches() << " inches" << endl;
	return out;
}
istream& operator>>(istream& in, Length& a)
{
	int feet, inches;
	cout << "Enter feet:\n";
	in >> feet;
	cout << "Enter inches: \n";
	in >> inches;

}