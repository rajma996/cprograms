#include<stdio.h>
int main(){
	int i=5;
	int *ptr = &i;
	int *ptr2 = &ptr;
	printf("%d\n",i);
	printf("%p\n",ptr);
	printf("%d\n",*ptr);
	printf("%p\n",ptr2);
	printf("%p\n",*ptr2);
	return 0;
}

