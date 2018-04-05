//Eggs
//4-5-18
//Author: Aaron Wessley

#include <iostream>

double dozen_Egg_Price = 1.00;
double single_Egg_Price = 0.25;

int main()
{
	system("cls");

	int wanted_Egg_Amount;
	int remaining_Eggs;
	int dozens;
	double egg_Total;

	std::cout << "How many eggs would you like?" << std::endl;
	std::cin >> wanted_Egg_Amount;

	dozens = (wanted_Egg_Amount / 12);
	remaining_Eggs = wanted_Egg_Amount % 12;
	egg_Total = (remaining_Eggs * single_Egg_Price) + (dozens * dozen_Egg_Price);

	std::cout << "You have " << dozens << " dozen egg(s) and " << remaining_Eggs << " egg(s) extra for $" << egg_Total << std::endl;

	system("pause");
	main();

}