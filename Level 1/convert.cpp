#include <iostream>
#include <math.h>

using namespace std;

int decimalToBinary(int n) {
  int i = 0, binary = 0;

  while (n > 0) {
    int bit = n & 1;
    // int bit = n % 2;
    // cout << bit << endl;
    binary = bit * pow(10, i) + binary;

    // n = n / 2;
    n = n >> 1;
    i++;
  }

  return binary;
}

int binaryToDecimal(int n) {
  int decimal = 0, i = 0;

  while (n > 0) {

    // bitwise method

    int bit = n & 1;

    decimal = decimal + bit * pow(2, i);

    n = n / 10;

    // int bit = n % 10;
    // decimal = bit * pow(2, i) + decimal;

    // n /= 10;
    i++;
  }

  return decimal;
}

int main() {
  int n = 10111;

  // int res = decimalToBinary(n);

  int res = binaryToDecimal(n);

  cout << res << endl;
  cout << "Hello World!\n";
}
