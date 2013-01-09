#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;
int main()
{
  cout << "Enter all the numbers, "
    "followed by end-of-file: ";
  // the number and sum of grades read so far
  int count = 0;
  double sum = 0;
  // a variable into which to read
  double x;
  // invariant:
  // we have read count grades so far, and
  // sum is the sum of the first count grades
  while (cin >> x) {
    ++count;
    sum += x;
  }
  // write the result
  streamsize prec = cout.precision();
  cout << "Average is " << setprecision(3)
       <<  sum / count
       << setprecision(prec) << endl;
  return 0;
}
