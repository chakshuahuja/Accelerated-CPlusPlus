#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::sort;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{
  const int max_grades = 4;
  cout << "Enter the name of the student and the marks for each"
       << " followed by the end of line";
  vector<string> student_names;
  vector<double> student_result;
  string name;
  while (cin >> name) {
    cout << "Enter " << max_grades << " grades for " << name << ":";
    student_names.push_back(name);
    int grade_count = 0;
    int grade;
    while(grade_count < max_grades && cin >> grade) {
      student_result.push_back(grade);
      ++grade_count;
    }  
    cout << "Please enter the next student details "
	 << "or end of file." << endl;
  }
  cout << "Result for each student:" << endl;
  typedef vector<string>::size_type name_vec_sz;
  name_vec_sz student_count = student_names.size();
  double grade_total;
  for (name_vec_sz i=0; i<student_count; ++i) {
      grade_total = 0;
      cout << "Student: " << student_names[i] << endl;
      for (int i=0; i<max_grades; ++i)
	  grade_total += student_result[i];
      cout << "Average: " << grade_total / max_grades << endl;
    }
  return 0;
}

