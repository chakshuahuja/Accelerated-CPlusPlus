#include<iostream>
int main() {
  int product = 1;
  for(int i=1; i<10; i++)
    product *= i;
  std::cout << "The product of the numbers in the range [1,10) is : " << product;
  std::cout << std::endl;
  return 0;
}
