#include<stdio.h>
static int i=0;
void fun(int x,char d[])
{
	if(x>10) fun(x/10,d);
	d[i]=x%10+'0';
	i++;
}
int main()
{
	char a[1000000];
	int n,j;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		fun(j,a);
	}
	for(j=0;j<i;j++)
	{
		printf("%c",a[j]);
	}
	int raj=i;
	int x;
	scanf("%d",x);
	i=0;
	char b[100];
	fun(x,b);

	return 0;
}
