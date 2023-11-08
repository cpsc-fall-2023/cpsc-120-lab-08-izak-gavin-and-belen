// Izak Ponce
// izakponce@csu.fullerton.edu
// @payingatt007
// Partners:@gtran65, @espacio-vacio

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  double sum{0.0};
  int count = 0;
  for (std::string& value : arguments) {
    if (count == 0) {
      count = 1;
      continue;
    }
    sum += std::stod(value);
  }
  double average{0.0};
  average = sum / static_cast<double>(arguments.size() - 1);
  std::cout << "average = " << average;

  return 0;
}
