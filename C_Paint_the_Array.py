from math import gcd
for i in range(int(input())):

    n=int(input())

    a=list(map(int,input().split()))

    #x1 even gcd y1 odd gcd
    x1,y1=a[0],a[1]
    for i in range(2,n,2):
        x1=gcd(x1,a[i])
    for i in range(3,n,2):
        y1=gcd(y1,a[i])

    cc=1
    
    for i in range(1,n,2):
            if(a[i]%x1==0):
                cc=0

    if(cc==1):
        print(x1)
        continue

    else:
        cc=1
        for i in range(0,n,2):
            if(a[i]%y1==0):
                cc=0
        if(cc==1):
            print(y1)
            continue
        else:
            print("0")
