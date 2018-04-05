//SwatTheBugs16.cpp
//Created/revised by Aaron Wessley on 4-5-18

#include <iostream>
using namespace std;

int main()
{
	//declare variable
	double temp = 35.3;
	double temp2;

	//increase variable's value by 1.5
	temp2 = temp + 1.5;

		//display variable's value
		std::cout << "After adding 1.5, the temp variable now contains " << temp2 << "." << std::endl;

	system("pause");
	return 0;
}	//end of main function