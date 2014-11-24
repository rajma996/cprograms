#include<stdio.h>
//int bins(int a[],int low,int high){
//}
int main(){
	int j,t,s,n,a[10],i;
	scanf("%d",&n);
	int low=0;
	int high=9;
	for(i=0;i<10;i++){
		if(i%2==0) a[i]=i+3;
		else a[i]=i+10;
	}
	if(a[low] >= a[high]) printf("-1");
	while(a[low] < a[high]){
		s=low + high;
		if (n<=a[s/2]){
			high=s/2;
			for(i=low;i<=high;i++){
				if(n==a[i]){
					printf("%d",i);
				}
			}
		}
		else {  
			low = s+1;
			high=high;
			for(i=low;i<=high;i++){
				if(n==a[i]){
					printf("%d",i);
				}

			}
		}
	}
	return 0;
}
