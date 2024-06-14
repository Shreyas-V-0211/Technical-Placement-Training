def Second_Largest(n,arr):
    for i in range(n):
            for j in range(n-1):
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
    for i in range(n):
        if arr[i] not in sorted:
            sorted.append(arr[i])
    n=len(sorted)
    return sorted[n-1]

n= 3
arr = [10,5,10]
sorted = []
if n>=2 and n<=100000:
    for i in range(n):
        if arr[i]>=1 and arr[i]<=100000:
            check=0
        else:
            print("Invalid Numbers\n Must range from 1 to 10^5")
    if check == 0:   
        print(Second_Largest(n,arr))
else:
    print("Number out of Bounds!!")
    exit(1)