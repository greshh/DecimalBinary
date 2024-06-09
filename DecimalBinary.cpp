#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int binarytodecimal(string bin);
string decimaltobinary(int dec);

bool decimalbinary; // decimal = true, binary = false
string input;
int decimal, width, i;

int main() {
  cout << "Enter a number: ";
  getline(cin, input);
  width = input.length();
  for (i = 0; i < width; i++) {
    if ((input[i] < 48) || (input[i] > 57)) {
      if (input[0] == '-') {
        break;
      }
      cout << "This is not a valid number.\n";
      exit(10);
    }
  }
  if (input[0] == '0') {
    for (i = 0; i < width; i++) {
      if ((input[i] != '0') && (input[i] != '1')) {
        cout << "This is not a valid binary number.\n";
        exit(10);
      }
      if (input == "0") {
        decimalbinary = true;
        break;
      }
      if (width > 9) {
        cout << "This binary number has more than 9 binary digits.\n";
        exit(10);
      }
      decimalbinary = false;
    }
  } else if (input[0] != '0') {
    decimal = stoi(input);
    if ((decimal < 0) || (decimal > 255)) {
      cout << "This decimal number is outside the range 0 to 255.\n";
      exit(10);
    }
    decimalbinary = true;
  }
  if (decimalbinary == false) {
    cout << "Converting binary to decimal. ";
    cout << "The result is " << binarytodecimal(input) << endl;
  } else {
    cout << "Converting decimal to binary. ";
    cout << "The result is " << decimaltobinary(decimal) << endl;
  }
}

int binarytodecimal(string bin) {
  int j, dec, digit;
  dec = 0;
  for (i = 0; i < width; i++) {
    j = width - i - 1;
    if (bin[i] == '1') {
      digit = bin[i] - 48;
      dec = dec + (digit * (pow(2, j)));
    }
  }
  return dec;
}

string decimaltobinary(int dec) {
  int result, j, k;
  string output;
  char bit[8];
  result = dec;
  i = 0;
  j = 0;
  k = 0;
  output = "0000 0000";
  while (result > 0) {
    if (result % 2 == 1) {
      bit[i] = '1';
    } else if (result % 2 == 0) {
      bit[i] = '0';
    }
    result = result / 2;
    i++;
  }
  j = i;
  for (i = 0; i < 4; i++) {
    if (bit[i] == '1') {
      output[(8-i)] = bit[i];
    }
    k++;
  }
  if (k < j) {
    for (i = 4; i < j; i++) {
      if (bit[i] == '1') {
        output[(7-i)] = bit[i];
      }
    }
  }
  return output;
}
