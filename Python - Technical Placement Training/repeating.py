arr = []
repeat = []
n=int(input("n = "))
print("arr[] = ")
for i in range(n):
    num=int(input())
    if num>=0 and num<n:
        arr.append(num)

for i in range(n):
    for j in range(n-1):
        if arr[j]>arr[j+1]:
            temp=arr[j]
            arr[j]=arr[j+1]
            arr[j+1]=temp

for i in range(n):
    for j in range(i+1,n):
        if arr[i] == arr[j]:
            if arr[i] not in repeat:
                repeat.append(arr[i])

if len(repeat)>0:
    print(repeat)
else:
    print("-1")