class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashmap;
        for (int i=0;i<nums.size();i++){
            int flag = target - nums[i];
            if (hashmap.find(flag)!=hashmap.end())
                return {i,hashmap[flag]};
            hashmap[nums[i]]=i;
        }
        return {};
    }
};
