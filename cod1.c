#include<stdio.h>
int main(){
	int a,b,c,n[6];
	scanf("%d%d%d",&a,&b,&c);
	n[0]=a+(b+c);
	n[1]=a+(b*c);
	n[2]=a*(b+c);
	n[3]=a*(b*c);
	n[4]=(a+b)*c;
	n[5]=(a*b)+c;
	int i,m=0;
	for(i=0;i<6;i++){
		if(m<n[i]){
			m=n[i];
		}
	}
	printf("%d\n",m);
	return 0;
}
