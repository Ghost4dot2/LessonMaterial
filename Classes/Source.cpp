#include <iostream>
#include <fstream>
#include <string>
#include "Inventory.h"

//using namespace std;

class fraction
{
public:
	void setNumerator(int num)
	{
		numerator = num;
	}
	void setDenominator(int num)
	{
		numerator = num;
	}
	fraction operator+(const fraction& right) {
		fraction result;
		result.denominator = this->denominator + right.denominator;
		result.numerator = this->numerator + right.numerator;

		return result;
	}
	fraction operator+(const int& right)
	{

	}

private:
	int numerator;
	int denominator;
};


int main()
{
	std::string one = "one";
	std::string two = "two";
	std::cout << one + two << std::endl;
	int i;
	Inventory playerInventory(true);
	playerInventory.getMirror(true);


}

