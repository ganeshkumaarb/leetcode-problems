class Solution {
public:

    int countPrimes(int n) {
        if (n<2) return 0;
        int c=0;
        
        vector<int> mp(n);
        int i=2;
        
        while(i*i<n){
            if (mp[i]==0){
                for (int t=i*i;t<n;t+=i) mp[t]=1;
            }
            i++;
        }
        for (int i=2;i<n;i++) if (mp[i]==0) c++;

        return c;
    }
};