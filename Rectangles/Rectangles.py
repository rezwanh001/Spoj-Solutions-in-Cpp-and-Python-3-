# your code goes here
'''
Created on May 20, 2016

@author: Md. Rezwanul Haque
'''
from cmath import sqrt
import math

n = int(input())
ans = math.sqrt(n)
rez = int(ans)
# print(rez)
cnt = 0
j = 0
for i in range(1, rez + 1):
    for j in range(i + 1, n + 1):
        if i * j <= n:
            cnt += 1

cnt += int(math.sqrt(n))
print(cnt)