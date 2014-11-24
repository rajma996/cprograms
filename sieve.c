#include<stdio.h>
int main(){
	int a[101];
	int u=101,i,n,j,k,h;
	a[0]=0;a[1]=0;
	for(i=2;i<u;i++){
		a[i]=1;
	}
	for(j=2;j<u;j++){
		for(k=j;k*j<u;k++){
			a[j*k]=0;
		}
	}
	printf("%d ",a[0]);
	for(n=1;n<u;n++){
		a[n]=a[n]+a[n-1];
		printf("%d ",a[n]);
	}
	printf("\n");
	return 0;
}

