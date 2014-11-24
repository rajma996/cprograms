#include<stdio.h>
int main(){
	char s[100],t[50];
	scanf("% [^\n]",s);
	scanf("% [^\n]",t);
	strccat(s,t);
	return 0;
}

void strccat(char s[],char t[]){
	int i=0,j=0;
	while(s[i]!='\0')
		i++;
	while((s[i++]=t[j++])!='\0')
}


