def Main():
  T = int(input())
  for _ in range(T):
    sm = 0
    n = int(input())
    while(n):
      sm += n//5
      n //= 5
    print(sm)
if __name__ == '__main__':
  Main()
