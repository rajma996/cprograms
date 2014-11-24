#include<stdio.h>
int s=0;
void move(int n,int a,int b,int c);
int main(){
	int a,b,c,n;
	a=1;
	b=2;
	c=3;
	scanf("%d",&n);
	move(n,a,b,c);
	printf("%d\n",s+1);
	return 0;
}
void move(int n,int a,int b,int c){
	if(n==1){
		printf("move disk from %d to %d\n",a,c);
		return;
	}
	move(n-1,a,c,b);
	s++;
	printf("move disk from %d to %d\n",a,c);
	move(n-1,b,a,c);
	s++;
	return;
}

