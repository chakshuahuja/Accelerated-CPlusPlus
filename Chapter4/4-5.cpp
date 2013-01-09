#include<iostream>
#include<vector>
#include<string>
#include "words.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::istream;
int main() {
  cout << "Enter the list of words : "
       << "followed by the end of line";
  vector<string> list;
  read_wd(cin, list);
  typedef vector<string>::size_type vec_sz;
  vec_sz size = list.size();
  cout << "The number of words entered are : " << size << endl;
  for(vec_sz i=0; i<size; i++) {
    int wordCount = 0;
    for(vec_sz j=0; j<size; j++)
      if(list[i] == list[j])
	wordCount += 1;
    cout  << list[i] << " : " << wordCount 
	  << " times." << endl;
  }
  return 0;
}
