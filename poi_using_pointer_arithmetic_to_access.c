#include<stdio.h>
#include<stdlib.h>  //to access malloc
int main(){
	int *array;
	array=(int*)malloc(4*sizeof(int));   //an array 'array' which will have 10 integer elements
	
	int **twodarray;
	twodarray=(int**)malloc(4*sizeof(int*));   //an array 'twodarray' which will have 10 pointers of the type array as its elements
	
	//to fill the 2d array
	int i;
	// for(i=0;i<10;i++){
	//       twodarray[i]=array;
	//}  This wiil not work bcoz same thing will be allocated to all 10 arrays to be declared
	//   Instead of this,we write as:
	for(i=0;i<4;i++){
		twodarray[i]=(int*)malloc(4*sizeof(int));
		//every element of twodarray will have memory allocated to it equivalent to a linear array of size 10
		//no need of 'array'
	}
	int j;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		 scanf("%d",&*(*(twodarray+i)+j));//this also works scanf("%d",*(twodarray+i)+j);
		}
	}
/*	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		 printf("%d",*(*twodarray+i)+j));
		}
	}
*/
	printf("%d",*(*(twodarray+2)+3));
	return 0;
}
