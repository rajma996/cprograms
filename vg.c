//3 ways to pass a 2d array through function
//int f(int **m,int b);
//int f(int *m[],int b);
//int f(int m[][100],int b); limitation-need to specify the number of columns
#include<stdio.h>
#define MAX 100
#include<stdlib.h>
int f(int **m,int row, int col);
int finc(int *m[],int row, int col);
int fprint(int m[MAX][MAX],int row, int col);
int f(int **m,int row, int col){
	int i,j;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&*(*(m+i)+j));
	return finc(m,row,col);
}

int finc(int *m[],int row, int col){
	int i,j;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			*(m[i]+j)+=2;
	return fprint(m,row,col);
}

int fprint(int m[MAX][MAX],int row, int col){
	int i,j;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			printf("%d ",m[i][j]);
	return 0;
}
int main(){
	int **m;
	int row,col;
	int i;
	scanf("%d%d",&row,&col);
	m=(int**)malloc(row*sizeof(int*));
	for(i=0;i<row;i++)
		m[i]=(int*)malloc(col*sizeof(int));
	printf("func called\n");
	int c=f(m,row,col);
	return 0;
}
