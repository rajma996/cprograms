#include<stdio.h>
int main()
{
	long long int a,b,c,d,e,f;
	scanf("%lld",&e);
	for(f=1;f<=e;f++)
	{
		d=0;
	scanf("%lld",&a);
	for(b=1;b<=a;b++)
	{
		scanf("%lld",&c);
	if(c%2==0 && c>d)
	{
		d=c;
	}
	}
	if(d==0)
	{
		printf("NO\n");
	}
	else
	{
		printf("%lld\n",d/2);
	}
	}
	return 0;
}
