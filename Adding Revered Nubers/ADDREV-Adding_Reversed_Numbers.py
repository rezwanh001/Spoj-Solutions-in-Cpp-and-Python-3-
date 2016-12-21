'''
Created on May 20, 2016

@author: Md. Rezwanul Haque
'''
n = int(input())
ans = 0
rezwan = 0
for i in range(n):
    a,b = map(int,input().split())
    A = int(str(a)[::-1])#reverse
    B = int(str(b)[::-1])#reverse
    ans = A + B
    rezwan = int(str(ans)[::-1])#reverse
    print(rezwan)
