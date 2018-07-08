#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

void push(Node* &head,int a)
{
	Node *temp = new Node;
	temp->data = a;
	temp->next = head;
	head = temp;
}

void traverse(Node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}

Node* merge_list(Node *head1,Node *head2)
{
	//Base case
	if(head1==NULL)	return head2;
	else if(head2==NULL)	return head1;

	Node *result;
	//Recursive call
	if(head1->data <= head2->data)
	{
		result = head1;
		result->next = merge_list(head1->next,head2);
	}
	else
	{
		result = head2;
		result->next = merge_list(head1,head2->next);
	}
	//Return result
	return result;
}


int main()
{
	Node *head1=NULL, *head2=NULL;
	push(head1,40);
	push(head1,15);
	push(head1,10);
	push(head1,5);
	traverse(head1);

	push(head2,20);
	push(head2,3);
	push(head2,2);
	traverse(head2);

	Node* head = merge_list(head1,head2);
	traverse(head);
	return 0;
}