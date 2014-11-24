#include<stdio.h>

int calc(char op, int a, int b){
          int m;
	  if(op == '+') m=a+b;
	  else if(op == '-') m=a-b;
	  else if(op == '*') m=a*b;
	  else if(op == '/') m=a/b;
	  else m = a%b;
	  return m;
}

int main(){
	int xarg1,xarg2;
	char xop;

	scanf("%c %d %d",&xop,&xarg1,&xarg2);
	printf("%d\n",calc(xop,xarg1,xarg2));

	return 0;
}




