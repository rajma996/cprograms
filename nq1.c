#include<stdio.h>
#define max 25
int n,fl=0;
void printsol(void);
void place(int row,int col);
int board[max][max]={0};
int main()
{
	int row;
	printf("enter n-value for n-queen problem: ");
	scanf("%d",&n);
	int i=0,j,k;
	while(i<n){
		//clearing the board
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				board[j][k]=0;
			}
		}
		fl=0;
		place(0,i);//start placing the queen from (0,i)th position;
		printf("------------------------------------\n");
		i++;
	}
	return 0;
}
void printsol(){
	int p,q;
	for(p=0;p<n;p++){
		for(q=0;q<n;q++){
			printf("%d ",board[p][q]);
		}
		fl=1;
		printf("\n");
	}
	return;
}
void place(int row,int col){
	int j,colnumber,flag=0;
	int i,k;
	if(fl==1)
		return;
	if(row==n)
		printsol();
	for(j=col;j<n;j++){
	//	flag=0;
		int g = safe(row,j);
	//	printf("safe = %d, row = %d, col = %d\n",g,row,j);
		if( g == 1){
			board[row][j]=1;
			flag=1;
			place(row+1,0);
		}
	}
	if(flag==0){

		colnumber=check(row-1); //'check' function returns the column number where we have queen in the previous row
	//	printf("row is %d col is %d\n",row-1,colnumber+1);
		board[row-1][colnumber]=0;
		place(row-1,colnumber+1);
	}
}

int safe(int currentrow,int currentcol){
	int i,j;
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
	//		printf("previous col where we had queen is = %d\n",i);
			return i;
		}
	}
}
