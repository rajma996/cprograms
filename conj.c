#include<stdio.h>
int main(){
	int a[46],i;
	a[0]=0;
	a[1]=1;
	for(i=2;i<46;i++){
		a[i]=a[i-1]+a[i-2];
	}
	int x,y,fl=0,m=0;
	scanf("%d%d",&x,&y);
	for(i=0;i<46;i++)
		if(x==a[i]){
			fl=1;
			m=i;
			break;
		}
	if(fl==1 && m!=0){
		if(y==a[m-1] || y==a[m+1]){
			printf("yes\n");
		}
		else{
			fl=0;
		}
	}
	if(fl==0)
		printf("no\n");
	return 0;
}
