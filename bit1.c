#include<stdio.h>
int getbits(int x, int p, int n)
{

		return ((x >> (p+1-n)) & ~(~0 << n));
}

int main(){
	int p,n;
	int x;
	scanf("%d",&x);
	scanf("%d%d",&p,&n);
	printf("%d\n",getbits(x,p,n));
	return 0;
}
