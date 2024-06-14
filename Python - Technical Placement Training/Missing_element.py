n=int(input(("n = ")))
arr = []
missing = []
if n>=1 and n<=1000000:
    print("arr[] = ",end=' ')
    for i in range(1,n):
        num=int(input())
        if num>=1 and num<=1000000:
            arr.append(num)
        else:
            print("Enter Valid Number!!")
else:
    print("Try Again!!")
    exit(1)
for i in range(1,n+1):
    if i not in arr:
        missing.append(i)
if len(missing)>1:
    print("Numbers must range from 1 to n with only one missing element")
elif len(missing)==1:
    print(arr)
else:
    print("All Present")
