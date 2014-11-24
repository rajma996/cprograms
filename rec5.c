#include<stdio.h>
void prin(int i);
int main(){
	int i;
	scanf("%d",&i);
	prin(i);
	//printf("\n");
	return 0;
}
void prin(int i){
	if(i!=0){
	   
	   printf("%d",i%10);
	   prin(i/10);
	   printf("tg\n");
	   //return;
	}
	printf("umesh\n");
}

