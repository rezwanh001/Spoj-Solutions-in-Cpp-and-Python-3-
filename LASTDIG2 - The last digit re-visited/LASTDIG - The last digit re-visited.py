import math
class Solution(object):
  def Main(self):
    n = int(input())
    for _ in range(n):
      a, b = map(int, input().split())
      if b == 0:
        print(1)
      else:
        a = a % 10
        b = b % 4
        if b == 0:
          b = 4
        
        print(pow(a, b)%10)
    
if __name__ == '__main__':
  Solution().Main()