#include<stdio.h>
struct cadd {
	int real;
	int img;
}c1,c2;

typedef struct cadd add;

int main(){
	int test,i;
	scanf("%d",&test);
	for(i=1;i<=test;i++){
		char c;
		scanf("%d%d",&c1.real,&c1.img);
		scanf("%d%d %c",&c2.real,&c2.img,&c);
		switch(c){
			case '+':
				printf("(%d)+(%d)i",c1.real+c2.real,c2.img+c1.img);
			//	if(c1.img + c2.img <= 0)
			//		printf("%d+%di",c1.real+c2.real,c2.img+c1.img);
				break;
			case '-':

				printf("(%d)+(%d)i",c1.real-c2.real,c1.img-c2.img);
				break;
			case '*':

				printf("(%d)+(%d)i",c1.real*c2.real-c1.img*c2.img,c1.real*c2.img+c1.img*c2.real);
				break;
			default:
				printf("invalid");
		}
		printf("\n");
	}
	return 0;
}


