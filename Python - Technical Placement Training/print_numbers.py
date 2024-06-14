def printNos(n,i):
    if i<=n:
        print(i,end=' ')
        i+=1
        printNos(n,i)     
    else:
        exit(1)
        

n=int(input("N = "))
i=1
if n>0:
    printNos(n,i)