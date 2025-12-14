#include <iostream>

// Minimal testing framework
int tests_passed = 0;
int tests_failed = 0;

#define ASSERT_EQ(title, expected, actual)                           \
  do {                                                               \
    if ((expected) == (actual)) {                                    \
      std::cout << "[PASS] " << title << std::endl;                  \
      ++tests_passed;                                                \
    } else {                                                         \
      std::cout << "[FAIL] " << title << " (expected " << (expected) \
                << ", got " << (actual) << ")" << std::endl;         \
      ++tests_failed;                                                \
    }                                                                \
  } while (0)

int add(int a, int b) { return a + b; }

int TEST_add(void)
{
  ASSERT_EQ("add(5,3) should be 8", 8, add(5, 3));
  ASSERT_EQ("add(0,0) should be 0", 0, add(0, 0));
  ASSERT_EQ("add(-2,-3) should be -5", -5, add(-2, -3));
  ASSERT_EQ("add(5,-3) should be 2", 2, add(5, -3));

  std::cout << "\nTests passed: " << tests_passed
            << "\nTests failed: " << tests_failed << std::endl;

  return tests_failed == 0 ? 0 : 1;
}

int main()
{
  TEST_add();
  int result = add(5, 3);
  std::cout << std::endl;
  std::cout << "Hello world! By the way, result = " << result << std::endl;
  return 0;
}

// end
