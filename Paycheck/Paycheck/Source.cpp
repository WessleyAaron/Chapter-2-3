//Paycheck Calculator
//4-5-18
//Author: Aaron Wessley


#include <iostream>
int main()
{
	system("cls");
	double hoursWorked;
	double hourlyPay;
	double netPaid;

	std::cout << "Please enter your hourly pay >>>" << std::endl;
	std::cin >> hourlyPay;

	std::cout << "Please enter how many hours you've worked >>>" << std::endl;
	std::cin >> hoursWorked;

	netPaid = (hoursWorked * hourlyPay);

	std::cout << "Your total pay is $" << netPaid << std::endl;

	system("Pause");
	main ();
}