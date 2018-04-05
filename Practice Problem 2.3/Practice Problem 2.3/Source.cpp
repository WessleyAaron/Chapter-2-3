//Lake View Motel
//4-5-18
//Author: Aaron Wessley

#include <iostream>
#include <string>


int main()
{
	double per_Night_Rate = 100;
	double one_Time_Room_Service = 35;
	double one_Time_Phone_Charge = 0.25;
	double total_Price;

	int nights_Staying;
	int phone_Charge_Minutes;
	std::string phone_Charge;
	std::string room_Service;

	std::cout << "How many nights will you be staying?" << std::endl;
	std::cin >> nights_Staying;

	std::cout << "Would you like one time room service?" << std::endl;
	std::cin >> room_Service;

	if (room_Service == "y")
	{
		total_Price = (total_Price + one_Time_Room_Service);
	}

	else 
	{
		total_Price = 0;
	}
	
	std::cout << "Would you like to charge your phone once for $0.25 per minute?" << std::endl;
	std::cin >> phone_Charge;

	if (phone_Charge == "y")
	{
		std::cout << "How many minutes would you like to charge your phone for?" << std::endl;
		std::cin >> phone_Charge_Minutes;
	}

	else
	{
		phone_Charge_Minutes = 0;
	}

	total_Price = total_Price + //finish this line

	system("pause");
	return 0;
}