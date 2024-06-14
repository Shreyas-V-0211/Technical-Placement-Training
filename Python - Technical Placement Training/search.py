def search(n,arr):
    if n in arr:
        return arr.index(n)
    else:
        return False
    
arr = []
n = int(input("n = "))
if n>=1 and n<=1000000:
    arr = [1,2,3,4]
    # for i in range(n):
    #     if arr[i]>0 and arr[i]<=1000000:
    #         check=0
    #     else:
    #         print("Out of Bounds")
    #         exit(1)
    # if check == 0:
    print(search(n,arr))
else:
    print("Out of Bounds")
    exit(1)
