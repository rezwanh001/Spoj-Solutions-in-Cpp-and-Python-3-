def Main(T):
    for _ in range(T):
        s = input()
        sm = 0
        for i in range(len(s)):
            a = int(s[i])
            sm += a
        print(sm)


if __name__ == '__main__':
    T = int(input())
    Main(T)