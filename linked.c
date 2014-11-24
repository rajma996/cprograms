#include<stdio.h>
#include<stdlib.h>

typedef struct node node;

struct node {
	int val;
	node *next; //pointer to the next similar structure
};
void print_list(node *head);
node* insert(node *head,int data);
int main(){
	node *head,*tmp,*apple,*sony,*mango;	//head declared but has no memory allocated to it
	head = (node*) malloc(sizeof(node));	//memory alloted to head equivalent to one node
	head->val=5;
	tmp=(node*)malloc(sizeof(node));
	head->next=tmp;
	tmp->val=8;
	apple=(node*)malloc(sizeof(node));
	tmp->next=apple;
	apple->val=23;
	mango=(node*)malloc(sizeof(node));
	apple->next=mango;
	mango->val=56;
	mango->next=NULL;

	insert(head,9);
	print_list(head);
	//printf("tmp %d\n",tmp->next);
	//printf("head %d\n",head->next->val);
	return 0;
}

void print_list(node *ptr){
	if(ptr==NULL)
		return;
	else {
		printf("%d\n",ptr->val);
	}
		print_list(ptr->next);
}

node* insert(node *head,int data){
	node *temp;
	temp=(node*)malloc(sizeof(node));
	temp->val=data;
	temp->next = NULL;
	
	if(head==NULL)		// IMPORTANT
		return temp;

	while(head->next !=NULL){
		head=head->next;
	}
	head->next=temp;
}

