class Solution {
public:
    int res=0;
    int n;
    void tr(vector<int>&nums,int temp, int i){
        if (i==n) {
            
            return;
        }
        for (int j=i;j<n;j++){
            int cur= temp^nums[j];
            res+=cur;
            tr(nums,cur,j+1);
            cout<<cur<<" ";
        }
    }
    int subsetXORSum(vector<int>& nums) {
        n=nums.size();
        tr(nums,0,0);
        return res;
    }
};