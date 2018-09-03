//暴力法求解，即考虑遍历两次数组，后一次寻找的数组为target-前一次的数字
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1;j < n; j++){
                if(nums[i]+nums[j]==target){
                    if(i<j) ans={i,j};
                    else ans={j,i};
                }
            }
        }
        return ans;
    }
};