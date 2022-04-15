#include <stdio.h>
int main() {
	int N,T,i,LastNum,FirstNum;
	scanf("%d",&T);
	while(T--)
	   {
	       scanf("%d",&N);
	       LastNum = N%10;
	       while(N!=0)
	       {
	         if(N<10)
	           {
	             FirstNum=N;
	           }
               N=N/10;
	        }    
	       printf("%d\n",FirstNum+LastNum);
	   }
	return 0;
}

