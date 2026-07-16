class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector< int > res;
       
        int m=nums[0];
        for (int i=0;i<nums.size();i++){
            m=max(m,nums[i]);
            res.push_back(gcd(m,nums[i]));

        }
        int i=0, j=nums.size()-1;
        sort(res.begin(),res.end());
        long long sum=0;
        while (i<j){
            sum+=gcd(res[i],res[j]);
            i++;
            j--;
        }
        return sum;
    }
};