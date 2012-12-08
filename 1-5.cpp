#include <iostream>
#include <string>
int main()
{
  { std::string s = "a string";
    std::string x;
    {  x = s + ", really";
      std::cout << s << std::endl; }
    std::cout << x << std::endl;
  }
  std::cout << std::endl;
  std::cout << "Initally the program was not valid because the scope of x was only within the inner block and it is shown as undeclared when it is required to print it\'s value outside this block" << std::endl; 
  return 0;
}
