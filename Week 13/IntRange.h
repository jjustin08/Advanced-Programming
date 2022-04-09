#pragma once
#include <iostream>
#include <string>
using namespace std;

class IntRange
{
private:
	int input, lower, upper;
public:
	// Exception class
	class TooHigh 
	{
	private:
		int value;
	public:
		TooHigh(int i)
		{
			setValue(i);
		}
		void setValue(int i) { value = i; }
		int getValue() { return value; }
		void exceptionMessage()
		{
			cout << "The value " << getValue() << " is too high.\n";
		}
	};
	class TooLow 
	{
	private:
		int value;
	public:
		TooLow(int i)
		{
			setValue(i);
		}
		void setValue(int i) { value = i; }
		int getValue() { return value; }
		void exceptionMessage()
		{
			cout << "The value " << getValue() << " is too low.\n";
		}
	};
	// member functions
	IntRange(int low, int high)
	{
		setLower(low);
		setUpper(high);
		input = 0;
	}

	void setLower(int l)
	{
		lower = l;
	}
	void setUpper(int u)
	{
		upper = u;
	}
	int getLower() { return lower; }
	int getUpper() { return upper; }


	int getUserInput()
	{
		cin >> input;
		if (input < getLower() )
		{
			throw TooLow(input);
		}
		else if (input > getUpper())
		{
			throw TooHigh(input);
		}
		return input;
	}
};