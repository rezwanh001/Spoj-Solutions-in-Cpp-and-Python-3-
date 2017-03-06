def LIS(d):
    l = []
    for i in range(len(d)):
        l.append(max([l[j] for j in range(i) if l[j][-1] < d[i]] or [[]], key = len) + [d[i]])

    return max(l,key=len)

if __name__ == '__main__':
    n = input()
    A = list(map(int,input().split()))
    l = len(LIS(A))
    print(l)