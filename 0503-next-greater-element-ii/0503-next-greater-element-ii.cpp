class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        stack<pair<int,int>> st;
        int n = nums.size();
        for (int i=0;i<n*2;i++){
            int x=nums[i%n];
            if(st.empty()) st.push({nums[i%n],i});
            else{
                
                while (!st.empty() && st.top().first < x) {
                    int num=st.top().first,ind = st.top().second;
                    mp[ind] = x;
                    st.pop();
                }
                st.push({nums[i%n],i});
            }
        }    
        while (!st.empty()) {
            int ind = st.top().second;
            mp[ind] = -1;
            st.pop();
        }
        vector<int> res(n);
        for (int i=0;i<n;i++) res[i]=mp[i];
        return res;
    }
};