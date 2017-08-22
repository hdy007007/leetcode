class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int> res;
        for (int i = 0;i < nums.size();i++){
            if (m.count(nums[i]) != 0){
                res.push_back(m[nums[i]] );
                res.push_back(i );
                return res;
            }
            int tmp = target - nums[i];
            m[tmp] = i; 
        }
        return res;
    }
};