//Sharon's Paycheck
//4-6-18
//Author: Aaron Wessley

#include <iostream>

int paychecks_Per_Year = 24;

int main()
{
	double account_Balance;
	double paycheck_Amount;
	double total_Paycheck_Amount;
	double a_Bonus_Amount;
	double b_Bonus_Amount;
	double percentage_Of_GP;

	std::cout << "How much is your paycheck?" << std::endl;
	std::cin >> paycheck_Amount;

	std::cout << "How big was your bonus this year?" << std::endl;
	std::cin >> a_Bonus_Amount;

	if (a_Bonus_Amount < 100)
	{
		std::cout << "Your bonus check is lower than $100" << std::endl;
	}

	else
	{
		total_Paycheck_Amount = paycheck_Amount * paychecks_Per_Year;
		b_Bonus_Amount = a_Bonus_Amount - 100;
	}
	
	std::cout << "What specific percentage of your gross pay would you like to deposit?" << std::endl;
	std::cin >> percentage_Of_GP;

	account_Balance = total_Paycheck_Amount - (total_Paycheck_Amount * (percentage_Of_GP / 100)) + b_Bonus_Amount;
	
	std::cout << "Account Balance: $" << account_Balance << std::endl;

	system("pause");
	return 0;
}