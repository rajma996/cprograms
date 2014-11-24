#include<stdio.h>
#include<stdlib.h>
long long int main(){
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
	long long int i,j,k,n;
	scanf("%lld",&n);
	//a=(long long int*)malloc(n*sizeof(long long int));
	long long int a[n];
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	long long int newmax = a[0];
	long long int nowmax = a[0];
	for(j=1;j<n;j++){
	//	printf("new max%lld\n",newmax);
		if(a[j] >= newmax + a[j]) //it only matters when we encounter a +ve number anlld newmax was -ve at that time
			newmax = a[j];
		else
			newmax += a[j];
	//	printf("now max%lld\n",nowmax);
		if(nowmax>=newmax)
			nowmax = nowmax; // to wait till the (j+..)nlld element if we are at jth
		else
			nowmax = newmax;
	}
	printf("%lld\n",nowmax);
	}
	return 0;
}




