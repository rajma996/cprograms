#include<stdlib.h>
#include<stdio.h>
int main(){
	int n,i;
	int *ptr;
	scanf("%d",&n);
	ptr=(int *)malloc(sizeof(int)*n);
	printf("%p\n",ptr);
	printf("%d\n",sizeof(ptr));
	return 0;
}

