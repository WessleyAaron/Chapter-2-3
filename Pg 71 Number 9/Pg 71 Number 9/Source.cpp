//Crispies Bagels and Bites
//4-6-18
//Author: Aaron Wessley

#include <iostream>


int main()
{
	double bagels = 0.99;
	double donuts = 0.75;
	double cups_Of_Coffee = 1.20;

	int bagelsOrdered;
	int donutsOrdered;
	int coffeeOrdered;
	int totalPrice;

	std::cout << "Welcome to Crispies Bagels and Bites" << std::endl;
	std::cout << "How many bagels would you like?" << std::endl;
	std::cin >> bagelsOrdered;

	std::cout << "How many donuts would you like?" << std::endl;
	std::cin >> donutsOrdered;

	std::cout << "How many cups of coffee would you like?" << std::endl;
	std::cin >> coffeeOrdered;

	totalPrice = (bagels * bagelsOrdered) + (donuts * donutsOrdered) + (cups_Of_Coffee * coffeeOrdered);

	std::cout << "This will cost you $" << totalPrice << std::endl;

	system("pause");
	return 0;
}