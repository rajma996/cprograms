#include<stdio.h>
int main(){
	int m,n,i,j,k;
	scanf("%d %d",&m,&n);
	int a[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
        printf("\n");
	if ( m == n) {
		for(i=0;i<m;i++){
			for(j=0;j<m;j++){
				if (j==i  || j == m-i-1){
					printf("%d ",a[i][j]);
				}
				else {
					a[i][j]=' ';
					printf("%d ",a[i][j]);
				} 
			
				
			}
			printf("\n");
		}
	}
	else printf("-1\n");
        return 0;
}


