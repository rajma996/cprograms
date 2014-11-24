#include<stdio.h>
#include<string.h>

int palindrome(char s){
	int i;
	char a[300];
	strcpy(a,s);
	strrev(s);
	i=strcmp(a,s);
	if(i==0)
		return strlen(s);
	else
		return 0;
}
int main(){
	int i,j;
	char s[300];
	scanf("%s",s);
	int l;
	l=strlen(s);
	for(i=0;i<=l-1;i++){
		if(s[i]==s[l-1-i]){
			palindrome(s);
