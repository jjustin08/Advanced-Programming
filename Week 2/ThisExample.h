#pragma once
#include <iostream>

class ThisExample
{
private:
	int a;
public:
	ThisExample(int a)
	{
		//(*this).a = a;
		this->setValue(a);
	}

	// Functions
	void setValue(int a)
	{
		this->a = a;
	}
	void printAddressAndValue()
	{
		std::cout << "The object at address" << this << " has value " << this->a << std::endl;
	}
};