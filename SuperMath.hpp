#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#define SuperMath int
using namespace std;


int reverseInt(int number);
int getNumPosition(SuperMath num, SuperMath i);
int any_to_decimal(string num1, int base, int num2);
string decimal_to_any(int num1, string num2, int base);
string any_to_any(string num1, int base1, string num2, int base2);


int reverseInt(int number) {
    int reversed = 0;
    
    while (number != 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    
    return reversed;
}

int getNumPosition(SuperMath num, SuperMath i) {
    int pos;
    pos = (int)(num / pow(10, i)) % 10;
    return pos;
}
