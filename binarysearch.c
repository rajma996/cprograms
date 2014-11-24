#include<stdio.h>
int bins(int a[],int g,int n){
	int low=0,high=g,k=0;
	int mid;
	mid=low+high;
	mid=mid/2;
	while(low<high){
		if(n<a[mid]){
			k++;
			high=mid-1;
		}
		if(n>a[mid]){
			low=mid+1;
		}
		if(n==a[mid]){
			return mid;
			break;
		}
		mid=(low+high)/2;
	}
	if(k==0){
//		printf("-1");
		return -1;
	}
}
int main(){
	int i,m,n;
	printf("enter the size of array ");
	scanf("%d",&m);
	int a[m];
	printf("enter the elements of array in ascending order ");
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the number you want to search for ");
	scanf("%d",&n);
	printf("the index of required number is %d\n",bins(a,m-1,n));
	return 0;
}
