#include<stdio.h>
#define max 10
int n;
void place(int row,int col);
int board[max][max]={0};
int main(){
	int row;
	n=8;//scanf("%d",&n);
	for(row=0;row<n;row++){
		place(row,0);
	}
	int p,q;
	for(p=0;p<n;p++){
		for(q=0;q<n;q++){
			printf("%d ",board[p][q]);
		}
		printf("\n");
	}
	return 0;
}

void place(int row,int col){
	int j,colnumber,flag=0;
	int i,k;
	for(k=0;k<n;k++){
		if(board[n-1][k]==1)
			return;
	}
	for(j=col;j<n;j++){
	//	flag=0;
		int g = safe(row,j);
		printf("safe = %d, row = %d, col = %d\n",g,row,j);
		if( g == 1){
			board[row][j]=1;
			flag=1;
			if(row==5 && j==5){
				printf("hi\n");
			}
	//		else
				place(row+1,0);
		}
	}
	if(flag==0){

		colnumber=check(row-1); 
		printf("row is %d col is %d\n",row-1,colnumber+1);
		board[row-1][colnumber]=0;
		place(row-1,colnumber+1);
	}
}

int safe(int currentrow,int currentcol){
	int i,j,k;
	//check horizontally
	for(i=0;i<currentcol;i++)
		if(board[currentrow][i]==1)
			return 0;
	//check vertically
	for(j=0;j<currentrow;j++)
		if(board[j][currentcol]==1)
			return 0;
	//check left diagonal
	for (i = currentrow,j = currentcol; i >= 0 && j >= 0; i--, j--)
		if (board[i][j]==1)
			return 0;
	//Check right diagonal
	for( i = currentrow, j = currentcol; j<n && i>=0; i--, j++)
		if(board[i][j]==1)
			return 0;
	return 1;
}
int check(int a){
	int i;
	for(i=0;i<n;i++){
		if(board[a][i]==1){
			printf("previous col where we had one is = %d\n",i);
			return i;
		}
	}
}
