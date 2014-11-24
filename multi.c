#include<stdio.h>
int main(){
	long int i,j,b=0;
	for(i=1;i<1000;i++){
		if ((i%3 == 0 || i%5 == 0) && i%15!=0) {
			b=b+i;
		}}
	printf("%ld\n",b);	
        for(j=1;j<1000;j++){
	      if(j%15==0) b=b+j;
	}  
	printf("%ld",b);
	return 0;
	}


