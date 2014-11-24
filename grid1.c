#include<stdio.h>
int matrix[10][10];
int n;
int main(){
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&matrix[i][j]);

	printf("%d\n",findMaxSum(matrix));
	return 0;
}
	
int findMaxSum (int matrix[n][n]){
	int i,j,k,p;
	int maxSum=0;
	for (i=0;i<n;i++){
		int temp[n];
		for(k=0;k<n;k++)
			temp[k]=0;
		for (j=i;j<n;j++){
			for(p=0;p<n;++p)
				temp[p]+=matrix[p][j];
			int sum = kadane(temp);
			if (sum > maxSum)
				maxSum=sum;
		}
	}
	return maxSum;
}
int kadane(int a[]){

	int j;
	int newmax = a[0];
	int nowmax = a[0];
	for(j=1;j<n;j++){
		if(a[j] >= newmax + a[j]) 
			newmax = a[j];
		else
			newmax += a[j];
		if(nowmax>=newmax)
			nowmax = nowmax;
		else
			nowmax = newmax;
	}
	return nowmax;
}
