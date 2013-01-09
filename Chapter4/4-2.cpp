#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::setw;
int main() {
  for (int i=1; i<=100; i++) {
    cout << setw(4) << i << setw(6) << i*i;
    cout << endl;
  }
  return 0;
} 
  
