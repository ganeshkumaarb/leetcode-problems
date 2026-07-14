class Solution:
    def countSubstrings(self, s: str) -> int:
        if len(s)==1:
            return 1

        c=0
        
        for i in range(len(s)):
            for j in range(i+1,len(s)+1):
                t=s[i:j]
                if t==t[::-1]:
                    c+=1
        return c