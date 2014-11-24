#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	char a[30][30];
	int flag=0;
	for(int i=0;i<n;i++){
		scanf(" %[^\n]s",a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==a[i+1][j+1]){
				flag=1;
			//	printf("f1=%d\n",flag);
			}
			if(flag==1){
				if(a[i][j+1]==a[i+1][j] && a[i][j+1]!=a[i][j]){
					flag=1;
					//printf("f2=%d\n",flag);
					break;
				}
				else{
					flag=0;
				}
			}
		}
		if(flag==1)
			break;
	}

	//printf("f3=%d\n",flag);
	if(flag==1)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	}
	return 0;
}
