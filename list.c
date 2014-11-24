#include<stdio.h>
#include<stdlib.h>
struct node {
	int x;
	struct node *next;
};
typedef struct node node;
int main()
{
	node *root;
	node *ch;      
	root=(node*)malloc(sizeof(node)); 
	ch=(node*)malloc(sizeof(node)); 
	root->next=ch;  
	root->x=5; 
	root->next->x=8;
	root->next->next=9;
	printf("%x %d %d %d\n",root->next,root->x,root->next->x,ch->next);

}
