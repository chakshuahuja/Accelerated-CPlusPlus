#include <iostream>
#include <string>
int main()
{
  { const std::string s = "a string";
    std::cout << s << std::endl; }
  { const std::string s = "another string";
    std::cout << s << std::endl; }
  std::cout << std::endl;
  std::cout << "The program is valid as initially \"a string\" gets stored in the variable s and hence is shown as output. As it encounters } the lifetime of s is over. In the next block again a new variable s is declared with initial value as \"another string\"";
  std::cout << std::endl;
  return 0;
}
