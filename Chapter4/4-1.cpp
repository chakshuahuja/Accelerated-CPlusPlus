#include <string.h>
int main() {
  std::cout << "The given code is not correct because the "
	    << "s.name.size() is of type string::size_type "
	    << "and maxlen is defined of type int."
  string::size_type maxlen = 0;
  Student_info s;
  max(s.name.size(), maxlen);
}
