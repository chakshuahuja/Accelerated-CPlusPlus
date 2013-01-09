#include<string>
#include "words.h"
using std::vector;
using std::string;
using std::istream;
istream& read_wd(istream& in, vector<string>& wd) {
  if(in) {
    wd.clear();
    string x;
    while(in >> x)
      wd.push_back(x);
    in.clear();
  }
  return in;
}
