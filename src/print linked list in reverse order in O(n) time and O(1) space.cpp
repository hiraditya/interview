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


int main()
{
	Node* head=NULL;
	push(head,5);
	push(head,4);
	push(head,3);
	push(head,2);
	push(head,1);
	traverse(head);

	//Reversing the linked list
	Node *prev=NULL, *curr=head, *next=NULL;
	while(curr!=NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
	traverse(head);

	//Reversing again to get the original linked list 
	prev=NULL, curr=head, next=NULL;
	while(curr!=NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
	traverse(head);

	return 0;
}