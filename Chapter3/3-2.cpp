#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::sort;
using std::cout;
using std::streamsize;
using std::endl;
using std::string;
using std::setprecision;
using std::vector;
int main()
{
  cout << "Enter all the integers, "
       << "followed by end-of-file: ";
  vector<int> integers;
  int x;
    while (cin >> x)
    integers.push_back(x);
  typedef vector<int>::size_type vec_sz;
  vec_sz size = integers.size();
  if (size == 0) {
    cout << endl << "You must enter the integers. "
      "Please try again." << endl;
    return 1;
  }
  sort(integers.begin(), integers.end());
    vec_sz mid = size/2;
    double q2;
  q2 = size % 2 == 0 ? (integers[mid] + integers[mid-1]) / 2.0
    : integers[mid];
  vec_sz mid1 = mid/2;
  vec_sz mid2 = (mid + size)/2;
   double q1, q3;
  if(mid % 2 == 0) {
      q1 =  (integers[mid1] + integers[mid1-1]) / 2.0;
      q3 =  (integers[mid2] + integers[mid2-1]) / 2.0;
  }
  else { 
    q1 = integers[mid1];
    q3 = integers[mid2];
  }
  streamsize prec = cout.precision();
  cout << "The value of q1 is " << setprecision(3) << q1 << endl
       << "The value of q2 is " << q2 << endl
       << "The value of q3 is " << q3
       << setprecision(prec) << endl;
  return 0;
}
