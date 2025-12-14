#include <iostream>

int add(int a, int b) { return a + b; }

int main()
{
  int a = 5;
  int b = 3;
  int result = add(a, b);
  std::cout << std::endl;
  std::cout << "Hello world!" << std::endl;
  std::cout << "By the way, result = " << result << std::endl;
  return 0;
}

// end
