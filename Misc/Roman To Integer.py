class Solution:
    def romanToInt(self, s: str) -> int:
        nums=0
        a=s.count("IV")
        nums=nums+(4*a)
        s=s.replace('IV','')
        a=s.count("IX")
        nums=nums+(9*a)
        s=s.replace('IX','')
        a=s.count("XL")
        nums=nums+(40*a)
        s=s.replace('XL','')
        a=s.count("XC")
        nums=nums+(90*a)
        s=s.replace('XC','')
        a=s.count("CD")
        nums=nums+(400*a)
        s=s.replace('CD','')
        a=s.count("CM")
        nums=nums+(900*a)
        s=s.replace('CM','')
        for i in s:
            if i=='I':
                nums=nums+1
            if i=='V':
                nums=nums+5
            if i=='X':
                nums=nums+10
            if i=='L':
                nums=nums+50
            if i=='C':
                nums=nums+100
            if i=='D':
                nums=nums+500
            if i=='M':
                nums=nums+1000
        return nums

        
        

        
