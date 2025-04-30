//week04-1.py 2 in 1 for°j°é
//leetcode 2579
class Solution:
    def coloredCells(self, n: int) -> int:
        ans=0//°j°é«e¡Aans=0
        for i in range(1,n*2,2)://python's for°j°é
            ans+=i
        for i in range(1,n*2-1,2):
            ans+=i
        return ans
