#include<stdio.h>
#define max 25
int n=9;
int z;
void printsol(void);
void place(int row,int col);
int board[max][max]={0};
int copy[max][max]={0};
int main()
{
	int row;
	int i=0,j,k;

	for(j=0;j<n;j++){
		for(k=0;k<n;k++){
			scanf("%d",board[j][k]);
			if(board[i][j]!=0){
				copy[i][j]=1;
			}
		}
	}
	fl=0;
	place(0,0,1);
	return 0;
}
void place(int row,int col,int numb){
	int j,colnumber,flag=0;
	int i,k;
	if(fl==1)
		return;
	if(row==n)
		printsol();
	for(j=col;j<n;j++){
		if(board[row][j]==0){
			int g = safe(row,j,1);
			if(g==1){
				board[row][j]=z;
				flag=1;
				place(row,j+1,1);
			}
		}
	if(flag==0){
		colnumber=check(row);
		place(row,colnumber,board[row][colnumber]+1);
	}
}

int safe(int currentrow,int currentcol,int no){
	int i,j,k;
	for(k=1;k<=9;k++){
		if(//check horizontally
				//check vertically
				//check in the current box )
				//z = that k which satisies above conditions (all)
	}
	return 1;
}
int check(int a){
	int i;
	for(i=;i<n;i++){
		if(copy[a][i]==1){
			return i;
		}
	}
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
