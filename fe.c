#include<stdio.h>
int i=10;
void hu(){
	int i=5;
	printf("%d\n",i);
}
void bar(){
	int i=15;
	printf("%d\n",i);
}
int main(){
	hu();
	bar();
	printf("%d\n",i);
	return 0;
}
