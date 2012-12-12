#include<iostream>
#include<vector>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
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
 cout << "You entered " << size << " words." << endl;
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
