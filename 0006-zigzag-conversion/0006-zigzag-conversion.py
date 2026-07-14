class Solution:
    def convert(self, s: str, numRows: int) -> str:
        l=[]
        for i in range(numRows):   
            l.append([])
        i=0
        ind=0
        j=1
        while (ind<len(s)):
            l[i].append(s[ind])
            i+=j
            if i==0:
                j=1
            elif i==numRows-1:
                j=-1
            elif i==numRows:
                i=0
                
            ind+=1
        res=""
        for i in l:
            res+="".join(i)
        return res