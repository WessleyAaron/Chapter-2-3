//Practice Problem 2.1
//4-5-18
//Author: Aaron Wessley

#include <iostream>


int main()
{
	double morning_Temperature_F, morning_Temperature_C;
	double noon_Temperature_F, noon_Temperature_C;
	double night_Temperature_F, night_Temperature_C;

	std::cout << "What was the temperature in the morning?" << std::endl;
	std::cin >> morning_Temperature_F;
	std::cout << "What was the temperature in the afternoon?" << std::endl;
	std::cin >> noon_Temperature_F;
	std::cout << "What was the temperature in the evening?" << std::endl;
	std::cin >> night_Temperature_F;

	morning_Temperature_C = (morning_Temperature_F - 32) * .5556;
	noon_Temperature_C = (noon_Temperature_F - 32) * .5556;
	night_Temperature_C = (night_Temperature_F - 32) * .5556;

	std::cout << "Morning: " << morning_Temperature_F << " Fahrenheit or " << morning_Temperature_C << " Celsius" << std::endl;
	std::cout << "Afternoon: " << noon_Temperature_F << " Fahrenheit or " << noon_Temperature_C << " Celsius" << std::endl;
	std::cout << "Evening: " << night_Temperature_F << " Fahrenheit or " << night_Temperature_C << " Celsius" << std::endl;

	system("pause");
	return 0;
}