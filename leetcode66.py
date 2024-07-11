class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        number = int("".join(map(str, digits)))
        number=number + 1
        ans = [int(digit) for digit in str(number)]
        return ans