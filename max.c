#include<stdio.h>
#include<time.h>
int main(){
	
	int a[100];
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=0;
	int sum=0;
	for(j=0;j<n;j++){
		for(k=j;k<n;k++){
			sum=sum+a[k];
			if(sum>max){
				max=sum;
			}
			else 
				break;
		}
		sum=0;
	}
	printf("%d\n",max);
	return 0;
}




