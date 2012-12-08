#include<iostream>
#include<string>
int main() {
  const std::string hello = "Hello";
  const std::string message = hello + ", world" + "!";
  std::cout << hello;
  std::cout << std::endl;
  std::cout << message << std::endl;
  std::cout << "The definitions are valid because + operator can have either of it\'s operands string literal or of type char but not both" << std::endl; 
  return 0;
}
