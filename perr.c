#include<stdio.h>
char a[]="567";
void per(char *a,int high,int low);
void intchange(char *c,char *d);
int main(){
	//char a[]="5678";
	int i,j,n;
	//scanf("%d",&n);
	//for(i=0;i<n;i++)
	//	scanf("%s",a);
	per(a,2,0);
	return 0;
}

void per(char *a,int high,int low){
	char *temp;
	int i;
	//printf("high = %d low = %d\n",high,low);
	if (low==high){
		printf("%s\n",a);
		return;
	}
	//for(j=0;j<high-1;j++){
	//	temp[i]=a[i+1];
	//}
	else {
		for(i=low;i<high;i++){
			intchange(a+i,a+low);//interchanging the two values
			per(a,high,i+1);
			intchange(a+i,a+low);
		}
	}
}
void intchange(char *c,char *d){
	char temp;
	temp=*c;
	*c=*d;
	*d=temp;
}
