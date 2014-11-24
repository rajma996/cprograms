#include<stdio.h>
int* binary(int i,int bin[]){



	return bin;
}



/*void powerset(int num[],int n){
  int len=pow(2,n);
  int bin[len];
  for(i=0;i<len;i++){
  binary(i,bin);
  for(j=0;j<n;j++){
  if(bin[j]==1){
  printf("%d",a[j]);
  }
  }
  printf("\n");
  }
  }*/
int main(){
	int a[4];
	int i;
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	int *b;
	b=binary(2,a);
	printf("%d\n",*b);
	printf("%x",&b[0]); //x is for hexadecimal

	return 0;
}


