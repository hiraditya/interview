#include <iostream>
#include <climits>
#include <vector>
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

void given_sum_path(Node *root,int sum,int gsum,vector<int> &leafs)
{
	sum += root->val;
	if(root->left==NULL && root->right==NULL)
	{
		if(sum==gsum)
		{
			leafs.push_back(root->idx);
		}
	}
	if(root->left!=NULL)
	given_sum_path(root->left,sum,gsum,leafs);
	
	if(root->right!=NULL)
	given_sum_path(root->right,sum,gsum,leafs);
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
	root->right = get_new_node(6,2);
	root->left->left = get_new_node(8,3);
	root->left->right = get_new_node(-4,4);

	int sum = 0, gsum=16;
	vector<int> leafs;
	given_sum_path(root,sum,gsum,leafs);


	cout<<"Path with sum "<<gsum<<":\n";
	for(int j=0;j<leafs.size();j++)
	{
		int i = leafs[j];
		while(i!=-1)
		{
			cout<<i<<" ";
			i = parent[i];
		}
		cout<<endl;
	}
    return 0;	
}
