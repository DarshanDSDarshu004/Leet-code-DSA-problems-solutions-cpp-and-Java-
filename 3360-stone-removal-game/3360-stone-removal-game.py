class Solution:
    def canAliceWin(self, n: int) -> bool:
        alice=True
        stones=n
        remain=10
        while stones>=remain:
            stones-=remain
            remain-=1
            alice=not alice
        return not alice
        
        


        