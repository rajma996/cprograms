#include<stdio.h>
void swap(int *p,int *q){
	int k;
	k=*p;
	*p=*q;
	*q=k;
}
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int *p,*q;
	p=&n;
	q=&m;
	swap(p,q);
	printf("n=%d m=%d",n,m);
	return 0;
}
