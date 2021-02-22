// CalculatorTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template<class T>
class arithmetic {
private:
	T number1_;
	T number2_;
public:
	arithmetic(T number1, T number2);
	T add();
	T subtract();
	T multiply();
	T divide();

};
	template<class T>
	arithmetic<T>::arithmetic(T number1, T number2)
	{
		number1_ = number1;
		number2_ = number2;
	}
	template<class T>
	T arithmetic<T>::add()
	{
		T num = number1_ + number2_;
		return num;
	}
	template<class T>
	T arithmetic<T>::subtract()
	{
		T num;
		num = number1_ - number2_;
		return num;
	}
	template<class T>
	T arithmetic<T>::multiply()
	{
		T num;
		num = number1_ * number2_;
		return num;
	}
	template<class T>
	T arithmetic<T>::divide()
	{
		T num;
		num = number1_ / number2_;
		return num;
	}
int main()
{
	arithmetic<float> arithmetic(45, 122);
	cout << "Add " << arithmetic.add() << endl;
	cout << "Subtract " << arithmetic.subtract() << endl;
	cout << "Multiply " << arithmetic.multiply() << endl;
	cout << "Divide " << arithmetic.divide() << endl;

		return 0;
	
}
