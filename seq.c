#include<stdio.h>
int n,k;
void sequence(int b[],int m){
	int j,i,p,q,v=-1;
	if(b[0]==n){
		return;
	}
	while(b[0]!=n){
		v=-1;
		if(b[m]<=n){
			for(i=0;i<k;i++){
				printf("*%d ",b[i]);
			}
			printf("\n");
			b[m]+=1;
		}
		if(b[m-1]!=1){
			for(i=0;i<k;i++){
				printf("^%d ",b[i]);
			}
			printf("\n");
		}
		for(q=0;q<k;q++)
			if(b[q]==n){
				v=q;
				break;
			}
		if(v>0){
			b[v-1]+=1;
			for(p=v;p<k;p++){
				b[p]=b[v-1];
			}
		}
	}
}
int main(){
	scanf("%d %d",&n,&k);
	int a[k],i,x;
	for(i=0;i<k;i++)
		a[i]=1;
	sequence(a,k-1);
	for(x=0;x<k;x++)
		printf("%d ",a[x]);
	printf("\n");
	return 0;
}
