#include<iostream>
int main() {
  int first, second, larger;
  //ask the user to input two numbers
  std::cout << "Please enter the first number:";
  std::cin >> first;
  std::cout << std::endl;
  std::cout << "Please enter the second number:";
  std::cin >> second;
  larger = (first > second) ? first : second;
  std::cout << "\nThe larger of the two numbers is : " << larger;
  std::cout << std::endl;
  return 0;
}
