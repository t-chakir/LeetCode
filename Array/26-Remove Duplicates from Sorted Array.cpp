#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int unik = 1;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != nums[unik - 1]){
                nums[unik] = nums[i];
                ++unik;
            }
        }
        return unik;
    }
};

int main(){
    vector<int> array { 0,0,1,1,1,2,2,3,3,4 };

    Solution sol;

    int result = sol.removeDuplicates(array);

    cout << result;

    for (int i = 0; i < result; ++i){
        cout << array[i] << endl;
    }
}