#include<iostream>
#include<string>
int main() {
  const std::string exclam = "!";
  const std::string message = "Hello" + ", world" + exclam;
  std::cout << exclam << std::endl;
  std::cout << message << std::endl;
  std::cout << "These definitions are not valid because both \"Hello\" and \", world\" are string literals";
  return 0;
}
