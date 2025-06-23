class Solution:
    def isPalindrome(self, s: str) -> bool:
        res = []
        for c in s.lower():
            if c.isalnum():
                res.append(c)
        return res == res[::-1]
    



#without inbuilt function isalnum


class Solution1:
    def isPalindrome(self, s: str) -> bool:
        res = []
        for c in s.lower():
            if ('a' <= c <= 'z') or ('0' <= c <= '9'):
                 res.append(c)
        return res == res[::-1]
    
print(Solution1().isPalindrome('A man, a plan, a canal: Panama'))