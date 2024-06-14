def seriesSum(N):
    sum = 0
    for i in range(1,N+1):
        sum = sum+i
    return sum

n = int(input("N = "))
if n>=1 and n<=1000000000:
    print(seriesSum(n))
else:
    print("Number out of bound")