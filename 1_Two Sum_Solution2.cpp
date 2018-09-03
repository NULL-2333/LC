//采用map求解，主要思想为：首先建立包含<数值，位置>的map，然后遍历数组，
//再利用map的特性查询等于target-nums[i]的数字的位置
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            int t=target-nums[i];
            if(m.count(t)&&m[t]!=i){
                ans.push_back(i);
                ans.push_back(m[t]);
                break;
            }
        }
        return ans;
    }
};