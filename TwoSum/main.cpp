#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
	std::unordered_map<int, int> numMap; // Stores (value, index)

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // If complement exists in the map, return indices
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i};
            }

            // Store the current number and index in map
            numMap[nums[i]] = i;
        }

        return {}; 
    }

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> result = twoSum(nums, target);
    std::cout << "[" << result[0] << ", " << result[1] << "]" << std::endl;

    return 0;
}
