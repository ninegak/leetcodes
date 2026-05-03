#include <iostream>
using namespace std;

int reverseInt(int x) {
    int rev = 0;
    int INT_MAX = 2147483647;

    signed int INT_MIN = -2147483648;
    while (x != 0) {

    int digit = x % 10;
    cout << digit << endl;
    x = x / 10;
    cout << x << endl;

    if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) {
        return 0;
    }
    if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) {
        return 0;
    }

    rev = rev * 10 + digit;
        cout << rev << endl;

    }
    return x;
}

int main() {
    cout << reverseInt(123) << endl;

    return 0;
}

