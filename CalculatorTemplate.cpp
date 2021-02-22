// CalculatorTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Arithmetic {
private:
	int number1;
	int number2;
public:
	Arithmetic(int number1, int number2)
	{
		this->number1 = number1;
		this->number2 = number2;
	}
	int add()
	{
		int num;
		num = number1 + number2;
		return num;
	}
	int subtract()
	{
		int num;
		num = number1 - number2;
		return num;
	}
	int multiply()
	{
		int num;
		num = number1 * number2;
		return num;
	}
	double divide()
	{
		double num;
		num = number1 / number2;
		return num;
	}

};
int main()
{
	Arithmetic arithmetic(10, 5);
	cout << "Add " << arithmetic.add() << endl;
	cout << "Subtract " << arithmetic.subtract() << endl;
	cout << "Multiply " << arithmetic.multiply() << endl;
	cout << "Divide " << arithmetic.divide() << endl;
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
