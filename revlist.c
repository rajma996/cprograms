//reverse the link list:
//
//inserting the current element of our main list to the beginning of new linked list and iterate to the next element 
node* insert(head,x){
	node *tmp;	
	tmp->val=x;
	temp->next=head;
	return tmp;
}
