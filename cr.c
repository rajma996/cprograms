#include<stdio.h>
int main(){
	int i,j,n;
	int a[11];
	a[0]=1;
	for(i=1;i<=10;i++){
		a[i]=a[i-1]*i;
		printf("%d  ",a[i]);
	}
	printf("\n");
	int c;
	for(j=0;j<=10;j++){
		c=(a[10])/(a[j]*a[10-j]);
		printf("%d ",c);
	}
	printf("\n");
	return 0; 
}


