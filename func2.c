#include<stdio.h>
int sq(int x)
{
	x=3;
	return x*x;
}
int main(){
	int b;
	scanf("%d",&b);
	printf("%d\n",sq(b));
	return 0;
}


