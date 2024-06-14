def food(r,unit,arr):
    required=r*unit
    sum=0
    for i in range(len(arr)):
        sum=sum+arr[i]
        if sum>required:
            print("Output: ",i+1)
            exit(1)
    if arr[0]=="":
        print("-1")
    else:
        print("0")

r=int(input("r: "))
unit=int(input("unit: "))
n=int(input("n: "))
arr=[]
print("arr: ",end='')
for i in range(0,n):
    num=int(input())
    arr.append(num)
food(r,unit,arr)