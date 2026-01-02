class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        ans = 0
        for d in digits:
            ans = ans * 10 + d

        ans += 1
        return list(map(int, str(ans)))
