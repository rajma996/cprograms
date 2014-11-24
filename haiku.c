#include<stdio.h>
#include<string.h>
int main(){
	int i,j,c=0,fl=0;
	char s[100];
	for(i=1;i<=3;i++){
		scanf(" %[^\n]s",s);
		int l=strlen(s);
		for(j=0;j<l;j++){
			if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
				c++;
			}
		}
		if(c!=5 || c!=7){
			fl=0;
			printf("NO\n");
			break;
		}
		else{
			fl=1;
		}
	}
	if(fl==1){
		printf("YES\n");
	}
	return 0;
}
