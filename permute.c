#include<stdio.h>
#include<string.h>
//char a[]="56789";
long long int k,c=0;
void per(char *b,char *a,int high,int low);
void intchange(char *c,char *d);
int main(){
	char *a,*b;
	int i,j,n;
	scanf("%d%lld",&n,&k);
	//for(i=0;i<n;i++)
	scanf(" %s",a);
	b=a;
	per(b,a,n-1,0);
	//printf("%lld\n",c);
	return 0;
}

void per(char *b,char *a,int high,int low){
	int i;
	//printf("high = %d low = %d\n",high,low);
	if (low==high){
		c++;
	//	if(c==k)
			printf("%s\n",a);
		return;
	}
	//for(j=0;j<high-1;j++){
	//	temp[i]=a[i+1];
	//}
	else {
		for(i=low;i<=high;i++){
			intchange(a+low,a+i);//interchanging the two values
			per(b,a,high,low+1);
			//a=b;
			intchange(a+low,a+i);
			//}
			//else
			//	intchange(a+low,a+2);//interchanging the two values

				
		}
	}
}
void intchange(char *c,char *d){
	char temp;
	temp=*d;
	*d=*c;
	*c=temp;
}
