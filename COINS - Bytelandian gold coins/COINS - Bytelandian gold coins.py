dp = {}
dp[0] = 0
dp[1] = 1

def recur(n):
    if n in dp:
        return dp[n]
    else:
        dp[n] = max(n, recur(n//2) + recur(n//3) + recur(n//4))
        return dp[n]

if __name__ == '__main__':
    try:
        while True:
            n = int(input())
            print(recur(n))
    except:
        pass

