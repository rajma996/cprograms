#include<stdio.h>
#include<stdlib.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int *a;
	int i,j,k,n;
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int newmax = a[0];
	int nowmax = a[0];
	for(j=1;j<n;j++){
	//	printf("new max%d\n",newmax);
		if(a[j] >= newmax + a[j]) //it only matters when we encounter a +ve number and newmax was -ve at that time
			newmax = a[j];
		else
			newmax += a[j];
	//	printf("now max%d\n",nowmax);
		if(nowmax>=newmax)
			nowmax = nowmax; // to wait till the (j+..)nd element if we are at jth
		else
			nowmax = newmax;
	}
	printf("%d\n",nowmax);
	}
	return 0;
}



