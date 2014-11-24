#include<stdio.h>
int board[4][4]={0};
int main(){
	int row;
	for(row=0;row<4;i++){
		place the queen(row,0);
	}
	return 0;
}

place the queen (row,col){
		for(j=col;j<4;j++){
			flag=0;
			if(queen is safe at board[row][j]){
				board[row][j]=1;
				flag=1;
				place the queen(row+1,0)
			}
		}
		if(flag=0){
			check where is queen in (row-1) 
				returnme the col number;
			place the queen (row-1,that col number +1);
		}
}

check(){

