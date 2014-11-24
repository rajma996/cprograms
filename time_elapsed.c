#include<stdio.h>
#include<time.h>
int main(){
	int a[10000];
	int i,j,f=0,k;
	clock_t tic = clock();
	for(i=0;i<10000;i++)
		a[i]=i;
	for(j=0;j<10000;j++){
		f=0;
		for(k=1;k<10000;k++){
			if(a[j]%k==0){
				f++;
			}
		}
	}
	clock_t toc= clock();
	printf("time elapsed is %lf\n",((double)(toc-tic))/CLOCKS_PER_SEC);
	return 0;
}

	
