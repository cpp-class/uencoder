#include "age_range.hpp"
#include "doctest.h"

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


TEST_CASE("Check invalid range")
{
	CHECK(age_range(0) == "Invalid");
	CHECK(age_range(-5) == "Invalid");
	CHECK(age_range(-100) == "Invalid");
}

TEST_CASE("Check child range 1-12")
{
	CHECK(age_range(1) == "Child");
	CHECK(age_range(5) == "Child");
	CHECK(age_range(12) == "Child");
	CHECK(age_range(13) != "Child");
}

TEST_CASE("Check Teenager range")
{
}

TEST_CASE("Check Adult range")
{
}
