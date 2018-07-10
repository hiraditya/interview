#include <iostream>
#include <climits>
using namespace std;

struct Node{
	int val,idx;
	Node *left, *right;
};

Node* get_new_node(int val,int idx)
{
	Node *new_node = new Node;
	new_node->val = val;
	new_node->idx = idx;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}

void min_sum_path(Node *root,int sum,int &minsum,int &minleaf)
{
	sum += root->val;
	if(root->left==NULL && root->right==NULL)
	{
		if(sum<minsum)
		{
			minsum = sum;
			minleaf = root->idx;
		}
	}
	if(root->left!=NULL)
	min_sum_path(root->left,sum,minsum,minleaf);
	
	if(root->right!=NULL)
	min_sum_path(root->right,sum,minsum,minleaf);
}

int main()
{
	int parent[5];
	parent[0] = -1;
	parent[1] = 0;
	parent[2] = 0;
	parent[3] = 1;
	parent[4] = 1;
	

	Node *root = get_new_node(10,0);
	root->left = get_new_node(-2,1);
	root->right = get_new_node(7,2);
	root->left->left = get_new_node(8,3);
	root->left->right = get_new_node(-4,4);

	int sum = 0, minsum=INT_MAX, minleaf=-1;
	min_sum_path(root,sum,minsum,minleaf);

	cout<<"Minsum: "<<minsum<<endl;

	cout<<"Minsum Path: ";
	int i = minleaf;
	while(i!=-1)
	{
		cout<<i<<" ";
		i = parent[i];
	}
	cout<<endl;
    return 0;	
}
