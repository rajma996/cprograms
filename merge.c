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

	while(i<n)
		c[k++]=a[i++]; //this is working since we have arrays which are already sorted
	while(j<m)
		c[k++]=b[j++]; //-------------------------------------------------------------
	for(s=0;s<=m+n-1;s++)
		printf("%d ",c[s]);
}

int main(){
	int a[5]={2,3,5,6,7};
	int b[]={4};
	int c[7];
	merge(a,b,c,5,1);
	return 0;
}


