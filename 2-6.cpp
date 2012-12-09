#include<iostream>
int main() {
  int i = 0;
  while (i < 10) {
    i += 1;
    std::cout << i << std::endl;
  }
  std::cout << " The program will start with the value of i as 0. On entering the "
	    << "the while loop as the condition is true, the value of i gets "
	    << "incremented to 1 and is displayed..Again the condition is checked..This "
	    << "continues till the condition i < 10 is true."
	    << "When the value of i is 9 , it satisfies the condition and enters the loop"
	    << ",where it gets incremented to 10 and so 10 is displayed."
	    << " After this the condition is false..so the output shows from 1-10.";
  std::cout << std::endl;
  return 0;
}
