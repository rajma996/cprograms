#include<stdio.h>
unsigned bittcount(unsigned x);
int main(){
	unsigned x;
	scanf("%u",&x);
	printf("%u\n",bittcount(x));
	return 0;
}
unsigned bittcount(unsigned x){
	int b;
	for(b=0;x!=0;x>>=1){
		if(x & 01){
			b++;
		}
	}
	return b;
}

