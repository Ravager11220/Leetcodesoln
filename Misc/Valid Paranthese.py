class Solution:
    def isValid(self, s: str) -> bool:
        openb = {"(": ")", "{": "}", "[": "]"}
        op = []  
        
        for char in s:
            if char in openb:  # If it's an opening bracket
                op.append(char)
            else:  # If it's a closing bracket
                if not op or openb[op.pop()] != char:
                    return False

        return len(op) == 0 
