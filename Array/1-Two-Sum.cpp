#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                std::cout << nums[i] << std::endl;
                    if (nums[i] + nums[j] == target) {
                        result.push_back(i);
                        result.push_back(j);
                        return result;
                    }
            }
        }
        return result;
    }
};

int main() {
    int tar = 6;
    vector<int> array = { 3, 2, 4 };

    Solution sol;
    vector<int> arr = sol.twoSum(array, tar);

    for (int index : arr) {
        std::cout << index;
    }
    std::cout << std::endl;
}
