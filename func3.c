#include<stdio.h>
int* sq(int *n,int m){
	int i;
	for(i=0;i<m;i++){
		n[i]*=n[i];

	}
	return n;
}
int main(){
	int a[100],i,n,*b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	*b=sq(a,n);
//	for(i=0;i<n;i++){
		printf("%d ",*b);
//	}
	return 0;
}
