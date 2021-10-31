nterm=int(input("How many terms: "))
n1,n2=0,1
count=0
if nterm<=0:
    print("not possible")
elif nterm==1:
    print(n1)
else:
    while count<nterm:
        print(n1)
        nth=n1+n2
        n1=n2
        n2=nth
        count +=1
