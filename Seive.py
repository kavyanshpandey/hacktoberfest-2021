from math import *


n = int(input())

pr = [True](n+1)
pr[0] = False
pr[1] = False

for i in range(2,int(sqrt(n))):
  if pr[i]== True :
    for j in range(i*i,n+1,i): 
      pr[j]= False
      
for i in range(0,len(pr)):
  if pr[i] == True:
    print(i)
      
