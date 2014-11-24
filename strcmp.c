#include<stdio.h>
int main(){
	int i,j;
	char b[9];
	char a[]="annu";
	i=0;
	while((b[i]=a[i])!='\0'){
		++i;
	}
	printf("%s",b);
	return 0;
}
