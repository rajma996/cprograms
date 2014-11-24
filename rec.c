#include<stdio.h>
int main(){
	int a[100],b,n;
	scanf("%d",&n);

	printf("%d\n",fib(n-1));
	
}
int fib(int i){
	if(i==0) return 1;
	if(i==1) return 1;
	return fib(i-1) + fib(i-2);
}
