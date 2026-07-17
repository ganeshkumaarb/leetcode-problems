class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,float> mp;
        for (int num: nums) mp[num]++;
        vector<int> res;
        float c = nums.size();
        c/=3;
        for (int &num:nums){
            if (mp[num]>c) res.push_back(num);
            mp[num]=0;
        }
        return res;
    }
};