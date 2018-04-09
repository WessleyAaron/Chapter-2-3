//Cartwright Industries
//4-9-18
//Author: Aaron Wessley

#include <iostream>


int main()
{
	double FWT = 0.20;
	double FICA = 0.08;
	double SI = 0.04;

	double hours;
	double hourlyPay;
	double grossPay;
	double netPay;
	double overtimeHours, overtimePay;

	std::cout << "How much does your employee make per hour?" << std::endl;
	std::cin >> hourlyPay;

	std::cout << "How many hours did your employee work?" << std::endl;
	std::cin >> hours;

	if (hours > 40)
	{
		overtimePay = (hours - 40) * (hourlyPay * 1.5);
		grossPay = overtimePay + (hours * hourlyPay);
	}

	else if (hours <= 40)
	{
		grossPay = (hours * hourlyPay);
	}

	netPay = grossPay - ((grossPay * FWT) + (grossPay * FICA) + (grossPay * SI));

	std::cout << "Employee's net pay: $" << netPay << std::endl;

	system("pause");
	return 0;
}