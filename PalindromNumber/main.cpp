#include <iostream>

bool isPalindrome(int x) {
    if ( x < 0 || ( x % 10 == 0 && x != 0 )) return false;
    // Negative & trailling zeros 
    int reversedHalf = 0;

    while (x > reversedHalf) {
	reversedHalf = reversedHalf * 10 + x % 10;
	x /= 10;
    }

    return x == reversedHalf || x == reversedHalf / 10;
    
}

int main() {
    std::cout << isPalindrome(121) << std::endl;
}
