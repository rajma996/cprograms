#include<stdio.h>
struct point{
	int x,y;
}pt1,pt2,mid;
struct rect{
	struct point pt1;
	struct point pt2;
}screen;
struct point makepoint(int p,int q){
	struct point temp;
	temp.x=p;
	temp.y=q;
	return temp;
}
int main(){
	screen.pt1=makepoint(0,0);
	screen.pt2=makepoint(100,100);
	mid=makepoint((screen.pt1.x+screen.pt2.x)/2,(screen.pt1.y+screen.pt2.y)/2);
	printf("%d  %d\n",mid.x,mid.y);

	return 0;
}
	



