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

//preorder 1 2 4 3 5

int search(int inorder[], int start,int end, int curr) {
	for(int i=start;i<=end;i++) {
		if(inorder[i] == curr) {
			return i;
		}
	}

	return -1;
}

//build from preorder and inorder
struct Node* buildTree(int preorder [], int inorder [], int start, int end) {
	static int idx=0;
	if(start>end) {
		return NULL;
	}

	int curr = preorder[idx];
	idx++;
	Node* node = new Node(curr);
	if(start == end) {
		return node;
	}

	int pos = search(inorder, start, end, curr);
	node->left= buildTree(preorder, inorder, start, pos-1);
	node->right= buildTree(preorder, inorder, pos+1, end);
	return node;
}

//build form postorder and inorder 
struct Node* buildTreeFromPost(int postorder [], int inorder [], int start, int end) {
	static int idx=end;
	if(start>end) {
		return NULL;
	}

	int curr = postorder[idx];
	idx--;
	Node* node = new Node(curr);
	if(start == end) {
		return node;
	}

	int pos = search(inorder, start, end, curr);
	node->left= buildTree(postorder, inorder, start, pos-1);
	node->right= buildTree(postorder, inorder, pos+1, end);
	return node;
}


void preorderPrint(struct Node* root) {
	if(root == NULL) {
		return;
	}

	cout<<root->data<<" ";
	preorderPrint(root->left);
	preorderPrint(root->right);

}


int main() {
	int preorder[] = {1, 2, 4, 3, 5};
	int inorder[] = {4, 2, 1, 5, 3};
	int postorder[] = {4,2,5,3,1};
	struct Node* root = buildTree(preorder, inorder, 0, 4);
	preorderPrint(root);

	struct Node* postroot = buildTreeFromPost(postorder, inorder, 0, 4);
	 cout<<endl;
	 preorderPrint(root);
}