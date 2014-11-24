#include<stdio.h>
int* merge(int a[],int b[],int c[],int n,int m){
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
		c[k++]=a[i++];
	while(j<m)
		c[k++]=b[j++]; 
	return c;
}
int* merge_sort(int a[],int n){
	int i;
	int left[n],right[n];
	if(n<=1) return;
	for(i=0;i<n/2;i++){
		left[i]=a[i];
	}
	for(i=n/2;i<n;i++){
		right[i-n/2]=a[i];
	}
	merge_sort(left,n/2);
	merge_sort(right,n-n/2);
	merge(left,right,a,n/2,n-n/2);
}



int main(){
	int n;
	int i;
	int *v;
	scanf("%d",&n);
	int a[n],c[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(n==1)printf("%d\n",a[0]);
	
	else {
		v=merge_sort(a,n);
		for(i=0;i<n;i++){
			printf("%d ",v[i]);
		}
	}
	printf("\n");
	return 0;
}
