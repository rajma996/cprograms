

#include <stdio.h>
void g(int s[],int p,int k,int t[],int q=0,int r=0)
{
	if(q==k)
	{
		for(int i=0;i<k;i++)
			printf("%d ",t[i]);
		printf("\n");
	}
	else
	{
		for(int i=r;i<p;i++)
		{
			t[q]=s[i];
			g(s,p,k,t,q+1,i+1);
		}
	}
}

int main()
{
	int s[]={1,2,3,4,5},t[5];
	g(s,5,3,t);
	return 0;
}


