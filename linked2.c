//pointers are passed by value,thus changing a pointer in other function 'll not be reflected in main func
//arrays are passed by reference
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
	node *head=NULL;			//head declared but has no memory allocated to it
	//head = (node*) malloc(sizeof(node));	//memory alloted to head equivalent to one node
	//head->val=1;
	int n,x;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&x);
		head=insert(head,x);
		print_list(head);
	}
	return 0;
}

void print_list(node *ptr){
	while(ptr!=NULL){
		printf("%d\n",ptr->val);
		ptr=ptr->next;
	}
	printf("\n");
}

node* insert(node *chain,int data){
	node *temp;
	node *start = chain;
	temp=(node*)malloc(sizeof(node));
	temp->val=data;
	temp->next = NULL;
	
	if(chain==NULL)		// IMPORTANT
		return temp ;

	while(chain->next !=NULL){
		chain=chain->next;
	}
	chain->next=temp;
	return start;
}
