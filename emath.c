#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		char s[100002];
		int a,b,c;
		long long int l=0;
		scanf(" %s",s);
		l=strlen(s);
		c=100*(s[l-3]-'0')+10*(s[l-2]-'0')+(s[l-1]-'0');
		switch(c%4){
			case 0:
				printf("4\n");
				break;
			default:
				printf("0\n");
				break;
		}
	}
	return 0;
}

