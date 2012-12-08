#include <iostream>
#include <string>
int main()
{
  std::cout << "What is your name? ";
  std::string name;
  std::cin >> name;
  std::cout << "Hello, " << name
	    << std::endl << "And what is yours? ";
  std::cin >> name;
  std::cout << "Hello, " << name
	    << "; nice to meet you too!" << std::endl;
  std::cout << std::endl;
  std::cout << "If first input is name1, it will display Hello, name1 and if after this next input is name2 it will display Hello, name2 ; nice to meet you too!..name2 gets stored in the same variable name and it has replaced name1." << std::endl;
    return 0;

}
