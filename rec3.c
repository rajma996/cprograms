#include<stdio.h>
void merge(int a[],int b[],int c[],int n,int m){
	int i=0,j=0,k=0,s;
	while(i<n && j<m){

		if(b[j]>=a[i]){
			c[k++]=a[i++];
		}
		else {
			c[k++]=b[j++];
		}
	}

	while(i<m)
		c[k++]=a[i++];
	while(j<n)
		c[k++]=b[j++];
	for(s=0;s<=m+n-1;s++)
		printf("%d ",c[s]);
}

int main(){
	int a[5]={2,3,4,5,6};
	int b[3]={0,7,9};
	int c[8];
	merge(a,b,c,5,3);
	return 0;
}


