#include<stdio.h>
void umesh(int m);
int main(){
	int n=587;
	umesh(n);
	return 0;
}


void umesh(int n){
	if (n<0){
		printf("-\n");
		n=-1*n;
	}
	if(n/10){
		umesh(n/10);
	}
	putchar(n%10+'0');
	printf("\n");
}




