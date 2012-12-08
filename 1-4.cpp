#include <iostream>
#include <string>
int main()
{
  { const std::string s = "a string";
    std::cout << s << std::endl;
    { const std::string s = "another string";
      std::cout << s << std::endl; }}
  std::cout << std::endl;
  std::cout << "This is also valid, but here the same memory space is overwritten";
  std::cout << std::endl;
  std::cout << "Even if we replace }} by };} then also the program is valid.";
  std::cout << std::endl; 
  return 0;
}
