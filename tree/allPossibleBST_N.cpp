#include <bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	struct Node* left;
	struct Node* right;

	Node(int val) {
		data=val;
		left=NULL;
		right=NULL;
	}
};

vector<Node*> constructBst(int start, int end) {
	vector<Node*> trees;

	if(start > end) {
		trees.push_back(NULL);
		return trees;
	}
	
	for(int i=start; i<=end;i++) {
		vector<Node*> leftsubtrees = constructBst(start, i-1);
		vector<Node*> rightsubtrees = constructBst(i+1, end);

		for(int j=0; j<leftsubtrees.size();j++) {
			Node* left = leftsubtrees[j];
			for(int k=0;k<rightsubtrees.size();k++) {
				Node* right = rightsubtrees[k];
				Node* node = new Node(i);
				node->left = left;
				node->right = right;
				trees.push_back(node);
			}
		}
	}
	return trees;
}

void preorder(Node* root) {
	if(root == NULL) {
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

int main() {
	struct Node* root;
	root = new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->right=new Node(6);

	vector<Node*> resTrees =  constructBst(1, 4);
	for(int i=0; i<resTrees.size();i++) {
		cout<<i+1<<": ";
		preorder(resTrees[i]);
		cout<<endl;
	}
	// cout<<sumKthLevel(root, 2);
}