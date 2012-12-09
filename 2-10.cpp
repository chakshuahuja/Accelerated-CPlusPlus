nt main() {
  int k = 0;
  while (k != n) {
    // invariant: we have written k asterisks so far
    using std::cout;
    cout << "*";
    ++k;
  }
  std::cout << std::endl;
  // std:: is required here
  std::cout << "std:: used implies the name cout or endl that follows is a part of "
	    << "standard library and not the part of the core language."
	    << "By cout the output goes into the standard output buffer "
	    << "and by endl, it ends the line of output and flushes the buffer "
	    << "std::endl is a manipulator."; 
  return 0;
