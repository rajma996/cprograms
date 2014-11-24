#include<stdio.h>
int main(){
	static int n=10;
	printf("hi\n");
	n--;
	if (n==0)
	return 0;
	main();
}

/*void printhi(){
	static int n=10;
	if(n!=0)
	{

	printf("hi");
	n--;
	printhi();
	}

}*/

