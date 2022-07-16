class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        ans = s.strip().split(" ")
        return len(ans[len(ans)-1])