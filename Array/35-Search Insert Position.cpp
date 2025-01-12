#include <iostream>
#include <vector>
#include <string> 

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int result = 0;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] >= target){
                nums[result] = nums[i];

                return result;
            }
            result++;
        }
        return result;
    }
};

int main(){
    int tar = 7;
    vector<int> array { 1,3,5,6 };

    Solution sol;

    int result = sol.searchInsert(array, tar);
    cout << "Массив: ";

    for(int i = 0; i < result; i++){
        cout << result << endl;
        break;
    }
}