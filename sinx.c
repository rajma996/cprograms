#include<stdio.h>
int main(){
	float eps=0.0000000000000001;
	float s,x,k=0,a;
	scanf("%f",&x);
	float t=x;
        s=t;
	while(t>eps){
		k=k+1;
		t=-t *x*x /(2*k+1) / (2*k);
		s=s+t;
	}
	printf("%.4f",s);
	return 0;
}
