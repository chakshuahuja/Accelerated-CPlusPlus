#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::sort;
int main() {
  cout << "Enter the list of words : "
       << "followed by the end of line";
  vector<string> list;
  string x;
  while (cin >> x)
    list.push_back(x);
  typedef vector<string>::size_type vec_sz;
  vec_sz size = list.size();
  if (size == 0) {
    cout << endl << "You must enter the list of words "
      "Please try again." << endl;
    return 1; 
  }
  vector<int> len;
  for(vec_sz i=0; i<size; i++) {
    int x = list[i].length();
      len.push_back(x);
  }
     vector<int>::iterator result;
     result = std::max_element(len.begin(), len.end());
     int max = std::distance(len.begin(), result);
     cout << "The longest element is:" << list[max] << endl;
     result = std::min_element(len.begin(), len.end());
     int min = std::distance(len.begin(), result);
     cout << "The shortest element is:" << list[min] << endl;
    return 0;
}
