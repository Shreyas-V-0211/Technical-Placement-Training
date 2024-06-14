def findCount(arr,length,num,diff):
    count=0
    for i in range(length):
        difference=abs(arr[i]-num)
        if difference<=diff:
            count+=1
    return count

arr = []
length=int(input("length: "))
print("arr: ",end='')
for i in range(length):
    num=int(input())
    arr.append(num)
num=int(input("num: "))
diff=int(input("diff: "))
c=0
c=findCount(arr,length,num,diff)
if c==0:
    print("-1")
else:
    print(c)