#pragma once

class NumberArray
{
private:
	double* aPtr;
	int arraySize;

public:
	//Function prototypes
	NumberArray();					// default contructor
	NumberArray(NumberArray&);		// copy constructor
	NumberArray(int size, double value);
	~NumberArray();					// destructor

	void print() const;
	void setValue(double value);
};