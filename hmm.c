#include<stdio.h>
#include<math.h>

int f1(int find,int p,int q)
{  
	int ok;
	ok= find*find+p*find+q;
	return ok;
}

int main()
{       int test,l;
scanf("%d",&test);
for(l=0;l<test;l++)
{
	int r[1010000];
	int i,p,q,p1,temp;
	int k=0,n,find;
	int max=0;
	scanf("%d",&n);
temp=n;
	scanf("%d%d",&p,&q);
	for(i=0;i<n;i++)
	{
		scanf("%d",&r[i]);
	}

	p1=pow(2,n);
	int c[1010000];
	for(i=0;i<p1;i++)
	{   
		int j=0;
		int b=0;
		int u=i;
		while(u>0)
		{
			b=b + pow(10,j)*(u%2);
			u=u/2;
			j++;
		}
		c[k]=b;
		k++;
	}

	for(i=0;i<k;i++)
	{   
		int xor =0;
n=temp;
		while(c[i]>0&&n>=0)
		{
			int z;
			z=c[i]%10;
			if(z==1)
			{   
				find=r[n-1];
				xor=xor^f1(find,p,q);
			}
			n--;
			c[i]=c[i]/10;
		}
		if(xor>max)
			max=xor;

	}
	printf("%d\n",max);
}
	return 0;
}
