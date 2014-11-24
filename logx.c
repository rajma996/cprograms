#include<stdio.h>
#include<math.h>
int main(){
	double s=0,y,a,k=2,c,x,eps=0.0000001;
	scanf("%lf",&y);
	x=y-1;
        a=x;
	s=a;
	while(fabs(a)>eps)
	{
		a=-1*a*x*(k-1) / k;
                s+=a;
		k++;
	}

	printf("%lf",s);
	return 0;
}



