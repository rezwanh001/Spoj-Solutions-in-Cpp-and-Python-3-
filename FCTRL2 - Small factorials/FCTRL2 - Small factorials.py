import math
 
def Main(T):
    for _ in range(T):
        n = int(input())
        print(math.factorial(n))
 
 
if __name__ == '__main__':
    T = int(input())
    Main(T) 