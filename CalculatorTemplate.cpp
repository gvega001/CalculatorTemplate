// CalculatorTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Arithmetic {
private:
	int number1;
	int number2;
public:
	Arithmetic(int number1, int number2);
	int add();
	int subtract();
	int multiply();
	double divide();

};
	Arithmetic::Arithmetic(int number1, int number2)
	{
		this->number1 = number1;
		this->number2 = number2;
	}
	int Arithmetic::add()
	{
		int num = number1 + number2;
		return num;
	}
	int Arithmetic::subtract()
	{
		int num;
		num = number1 - number2;
		return num;
	}
	int Arithmetic::multiply()
	{
		int num;
		num = this->number1 * number2;
		return num;
	}
	double Arithmetic::divide()
	{
		double num;
		num = number1 / number2;
		return num;
	}
int main()
{
	Arithmetic arithmetic(45, 122);
	cout << "Add " << arithmetic.add() << endl;
	cout << "Subtract " << arithmetic.subtract() << endl;
	cout << "Multiply " << arithmetic.multiply() << endl;
	cout << "Divide " << arithmetic.divide() << endl;

		return 0;
	
}
