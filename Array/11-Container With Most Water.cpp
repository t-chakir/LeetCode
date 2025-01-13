#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {

        int mult = 0;
        int multMax = 0;
        int max = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right){

            if(height[left] > height[right]){
                multMax = height[right];
            } else {
                multMax = height[left];
            }
            mult = multMax * (right - left);
            if (mult > max) {
                max = mult;
            }

            if (height[left] < height[right]){
                left++;
            } else {
                right--;
            }
        }
        return max;
    }
};

int main(){
    vector<int> array { 1,8,6,2,5,4,8,3,7 };

    Solution sol;

    int result = sol.maxArea(array);

    cout << result << endl;

    // for(int i = 0; i < result; i++){

    // }
}
