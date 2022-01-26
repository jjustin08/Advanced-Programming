#pragma once

class Budget
{
private:
	static double corpBudget;
	double divBudget;

public:
	Budget()
	{
		divBudget = 0;
	}
	void addBudget(double b)
	{
		divBudget += b;
		corpBudget += divBudget;
	}
	double getDivBudget()
	{
		return divBudget;
	}
	static double getCorpBudget()
	{
		return corpBudget;
	}

	static void mainOffice(double budReq)
	{
		corpBudget += budReq;
	}

};

double Budget::corpBudget = 0;