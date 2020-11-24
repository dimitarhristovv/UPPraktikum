#include<iostream>
#include <vector>
using namespace std;
int findGCD(int number1, int number2)
{
	if (number1 == number2)
	{
		return number1;
	}
	if (number1 > number2)
	{
		return findGCD(number1 - number2, number2);
	}
	if (number1 < number2)
	{
		return findGCD(number1, number2 - number1);
	}
		 
}
int main()
{
	int number1, number2;
	cin >> number1 >> number2;
	cout << findGCD(number1, number2) << endl;
	return 0;
}