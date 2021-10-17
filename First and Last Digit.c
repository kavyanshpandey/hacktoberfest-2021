#include <stdio.h>
int main(void) 
{
	int N,i,LastNum,FirstNum;

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
	       printf("First digit:%d\nLast digit:%d",FirstNum,LastNum);

	return 0;
}

