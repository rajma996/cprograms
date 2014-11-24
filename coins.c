#include<stdio.h>
int ram=0;
int step=0;
int shyam=0;
void inst(int a){
	step++;
	if(a!=1){
		inst(a-1);
		inst(a-2);
	}
	if(a==1)
		inst(a-1);

	else if(a==0){
		if(step%2==0){
			shyam++;
			return;
		}
		else{
			ram++;
			return;
		}
	}
}
int main(){
	int n,k,c,t;
	scanf("%d",&t);
	while(t--){
		ram=0;shyam=0;step=0;
		scanf("%d %d",&n,&k);
                if(k==1)		
		{
			inst(n-1);
			if(n!=1)
				inst(n-2);
		}
		else
		{
			inst(n-1);
			if(n!=1)
				inst(n-2);
                 }
	
	
		if(k==1)
			printf("%d %d\n",ram,shyam);
		else
			printf("%d %d\n",shyam,ram);
	}
	return 0;
}
