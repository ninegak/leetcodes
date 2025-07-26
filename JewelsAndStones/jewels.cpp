#include <iostream>
#include <string>

int numJewelsInStones(std::string jewels, std::string stones) {
    int ans = 0;
    for (int i = 0; i < stones.length(); i++) {
        for (int j = 0; j < jewels.length(); j++) {
            if (jewels[j] == stones[i]) {
                ans += 1;
            }
        }
    }
    std::cout << ans << std::endl;
    return ans;
}

int main() {
    std::string jewels = "aA";
    std::string stones = "aAAbbbb";
    numJewelsInStones(jewels, stones);
    return 0;
}

