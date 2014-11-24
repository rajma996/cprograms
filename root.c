#include<stdio.h>
int main(){
	double i,c;
	for(i=3.355;i<=3.356;i=i+0.0001){
		c= i*i*i - 3*i*i -4;
		if(c==0 || (c<=0.0001)&&(c>=-0.0001))
		{	printf("%lf\n",i);
			break;
		}
	}
	return 0;
}
