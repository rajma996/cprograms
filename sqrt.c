#include<stdio.h>
#include<math.h>
int main(){
	double x,a,b,c,eps = 0.0000000001;
	scanf("%lf",&x);
	b=x;
	a=b;
	c=1-b;
        
	while( fabs(c) > eps){
		a=a * (1 + c / 2);
         	c=c * c * (0.75 + 0.25*c);
	}
        printf("%.4lf",a);
	return 0;
}
