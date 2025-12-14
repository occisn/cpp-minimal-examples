#include "integers.hpp"
#include <chrono>
#include <cstdlib>
#include <iostream>

int main()
{
  std::cout << std::endl;

  auto start = std::chrono::high_resolution_clock::now();
  int sum = add(3, 5);
  auto end = std::chrono::high_resolution_clock::now();

  std::chrono::duration<double> duration = end - start;
  std::cout << "Result: " << sum << std::endl;
  std::cout << "Duration: " << duration.count() << " seconds" << std::endl;

  return EXIT_SUCCESS;
}
