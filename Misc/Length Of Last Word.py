class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        e=False
        n=0
        s=s.strip()
        l=len(s)
        empty=False
        while e==False:
            n=n-1
            if s[n]==" ":
                e=True
            if -n == l:
                empty=True
                e=True
        if empty==False:
            return (-n-1)
        else:
            return l
        

        





        
