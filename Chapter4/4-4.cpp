#include<iostream>
#include<iomanip>
#include<ios>
#include<math.h>
using std::cin;
using std::cout;
using std::endl;
using std::setw;
using std::streamsize;
using std::setprecision;
int main() {
  for (double i=1; i<100; i+=0.5) {
    const double max_input = 99;
    int max_input_digit = (floor(log10(max_input)) + 1) + 2;
    const double max_output = max_input * max_input;
    int max_output_digit = (floor(log10(max_output)) + 1) + 3;
    streamsize prec = cout.precision();
    cout << setprecision(max_output_digit - 1);
    cout << setw(max_input_digit + 1) << i << setw(max_output_digit + 1) << i*i;
    cout << setprecision(prec);
    cout << endl;
  }
  return 0;
}
