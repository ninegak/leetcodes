#include <iostream>
#include <numeric>
std::string gcdOfStrings(std::string str1, std::string str2) {
  if (str1 + str2 != str2 + str1) {
    return "";
  }

  int gcd_len = std::gcd(str1.size(), str2.size());

  return str1.substr(0, std::gcd(0, gcd_len));
};

int main() {
  std::string str1 = "ABCABC";
  std::string str2 = "ABC";
  std::string result = gcdOfStrings(str1, str2);
  return 0;
}
