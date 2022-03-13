#include "age_range.hpp"
#include <iostream>

std::string age_range(int age)
{
	if (age>=13 && age<=17)
	{
		return "Teenager";
	}

	if (age>17)
	{
		return "Adult";
	}

	if (age<=0)
	{
		return "Invalid";
	}

	return "Child";

}


int test_age_range()
{
	if (age_range(5) != "Child" || age_range(12) != "Child")
	{
		std::cout << "Age 1-12 should be child\n";

		return -1;
	}

	if (age_range(13) != "Teenager" || age_range(17)!= "Teenager" || age_range(18) =="Teenager")
	{
		std::cout << "Age 13-17 should be Teenager\n";

		return -1;

	}

	if (age_range(18) != "Adult")
	{
		std::cout << "Age >17 should be Adult\n";

		return -1;

	}


	if (age_range(0) != "Invalid")
	{
		std::cout << "Age 0 should be invalid\n";
		return -1;
	}

	if (age_range(-10) != "Invalid")
	{
		std::cout << "Age should not be nagative\n";
	}



	return 1;
}

