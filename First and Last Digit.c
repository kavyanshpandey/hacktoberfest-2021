#include <stdio.h>
int main(void) 
{
	int N,T,i,LN,FN;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	   {
	       scanf("%d",&N);
	       LN = N%10;
	       while(N!=0)
	       {
	         if(N<10)
	           {
	             FN=N;
	           }
               N=N/10;
	        }    
	       printf("%d\n",FN+LN);
	   }
	return 0;
}

