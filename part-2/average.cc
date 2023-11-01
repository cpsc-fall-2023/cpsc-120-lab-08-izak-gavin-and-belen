// Izak Ponce
// izakponce@csu.fullerton.edu
// @payingatt007
// Partners:@gtran65, @espacio-vacio

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() <= 1) {
    std::cerr << "Error: Please provide at least one command line argument."
              << std::endl;
    return 1;
  }
  // XTODO: Validate that there is at least one command line argument.
  // XIf not, print an error message and return a non-zero value.
  double sum = 0.0;
  // XTODO: Write a for-each loop to sum (add up) all of the command line
  // Xarguments.
  // XUse a double or float type so that your program preserves fractional
  // Xvalues.
  for (int i = 1; i < arguments.size(); ++i) {
    try {
      double value = std::stod(arguments[i]);
      sum += value;
    } catch (const std::invalid_argument& e) {
      std::cerr << "Error: Invalid argument found - " << arguments[i]
                << std::endl;
      return 1;
    }
  }
  // XThe loop needs to skip over the command name, which is the first element
  // Xof the arguments vector.
  // XEach argument is a std::string. You will need to convert each string into
  // Xa number with the std::stod or std::stof function.

  // XTODO: After the loop has finished summing the arguments, calculate the
  // Xaverage of the values. Recall that the average is the total value divided
  // Xby the number of values.
  double average = sum / (arguments.size() - 1);
  // XTODO: Use cout to print out a message of the form
  // Xaverage = *AVERAGE*
  std::cout << "average = " << average << std::endl;
  // Xon its own line.

  return 0;
}
