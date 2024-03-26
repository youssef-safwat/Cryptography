#include <iostream>
using std::cout;
// gcd function
// accept two integer as a parameters
// return greatest common divisor
int gcd(int, int);

int main(int argc, char *argv[]) {
  cout << gcd(18, 14) << '\n';
  return 0;
}
// Declration of gcd function
int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
