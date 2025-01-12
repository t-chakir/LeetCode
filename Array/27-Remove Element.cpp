#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int result = 0;
        for (int i = 0; i < nums.size(); ++i){
            if (nums[i] != val){
                nums[result] = nums[i];
                cout << "result: " << result << endl;
                result++;
            }
        }
        return result;
    }
};

int main(){
    int val = 2;
    vector<int> array { 0,1,2,2,3,0,4,2 };

    Solution sol;

    int resul = sol.removeElement(array, val);
    
    cout << "============================" << endl;

    cout << resul << endl;

    for (int i = 0; i < resul; ++i){
        cout << array[i] << endl;
    }

    return 0;
}