#include<stdio.h>
int main(){
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	char a[n][m];
	for(i=0;i<n;i++)
		scanf(" %[^\n]s",a[i]);
		for(j=0;j<n;j++){
		for(i=0;i<m;i++){
			printf("%c",a[j][i]);
		}
		printf("\n");
	}
	printf("%s",a[0]);
	return 0;
}
