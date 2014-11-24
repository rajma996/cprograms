#include<stdio.h>

int max(int a,int b){
	if(a>=b)
		return a;
	else
		return b;
}
int main(){
	int a[10][10],temp[10][10],maxval[10];
	int i,j,k,row,col;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
			temp[i][j]=a[i][j];
		}
	}

	for(k=0;k<col;k++){
		for(j=k+1;j<col;j++){
			temp[0][j]+=temp[0][j-1];
		}
		for(i=k+1;i<row;i++){
			temp[i][0]+=temp[i-1][0];
		}
		for(i=k+1;i<row;i++){
			for(j=k+1;j<col;j++){
				temp[i][j]=max(temp[i][j]+temp[i-1][j],temp[i][j]+temp[i][j-1]);
			}
		}
		maxval[k]=temp[row-1][0];
		for(i=0;i<col;i++){
			if(temp[row-1][i]>maxval[k])
				maxval[k]=temp[row-1][i];
		}

		printf("for k = %d\n",k);
		
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				printf("%d ",temp[i][j]);
			}
			printf("\n");
		}
			
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				temp[i][j]=a[i][j];
			}
		}
	}
	int h=maxval[0];
	for(i=0;i<col;i++)
		if(maxval[i]>h)
			h=maxval[i];

	printf("%d\n",h);
	return 0;
}


