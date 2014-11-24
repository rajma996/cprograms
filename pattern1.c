//Problem Print
//1
//2 3
//4 5 6
//7 8 9 10
//and so on upto 10 rows
#include<stdio.h>
int main()
{
	int i=1,k=1,j,n,p;

	for(n=1;n<=10;n++)
	{		
		for(i=(n*n-n+2)/2;i<=((n*n)/2+(n)/2);i++){
			printf("%d\t",i);

         
		}
		printf("\n");
	}
		return 0;
}
