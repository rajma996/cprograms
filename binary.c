#include<stdio.h>
int main(){
	int i,j,a[100],n;
	scanf("%d",&n);
	i=0;
	while(n>0){
		a[i]=n%2;
		n=n/2;
		i++;
//		printf("%d  ",r);
	}
	for(j=i-1;j>=0;j--){
	printf("%d  ",a[j]);
	}
	return 0;
}
