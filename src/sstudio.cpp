#include <iostream>
#include <string>


int main() {
//	std::cout << " ### String Studio #### \n";

	std::string first_name;
	std::string family_name;
	int age;

	std::cout << "Please enter your name+age:";
	std::cin >> first_name >> family_name >> age ;

	std::cout << "Hello " << first_name << "-" << family_name <<". Your age is " << age << "!\n";

}
