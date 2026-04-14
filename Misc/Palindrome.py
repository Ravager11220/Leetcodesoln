class Solution:
    def isPalindrome(self, x: int) -> bool:
        st=str(x)
        stt=st[::-1]
        return st==stt

        
