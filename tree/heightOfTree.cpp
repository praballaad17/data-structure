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

int calcHeight(Node* root) {
	if(root == NULL) {
		return 0;
	}

	int rHeight = calcHeight(root->right);
	int lHeight = calcHeight(root->left);

	return max(rHeight, lHeight) +1;
}

/* tc: O(n^2) we are calc height and calDiamerter is called*/
// int calcDiameter(Node* root) {
// 	if(root == NULL) {
// 		return 0;
// 	}

// 	int lHeight= calcHeight(root->left);
// 	int rHeight= calcHeight(root->right);
// 	int currDia = lHeight + rHeight + 1;

// 	int LDia = calcDiameter(root->left);
// 	int RDia = calcDiameter(root->right);

// 	return max(currDia, max(LDia, RDia));
// }

int calcDiameter(Node* root, int *h) {
	if(root == NULL) {
		h =0;
		return 0;
	}

	int lh=0, rh=0;
	int lDia = calcDiameter(root->left, &lh);
	int RDia = calcDiameter(root->right, &rh);

	*h = max(lh, rh) +1;

	int currDia = lh + rh + 1;
	return max(currDia, max(lDia, RDia));
}

int main() {
	struct Node* root;
	root = new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->right=new Node(6);
	root->right->right->right=new Node(7);


	cout<<calcHeight(root)<<endl;
	int* h;
	cout<<"diameter"<<calcDiameter(root, h)<<" height: "<<*h<<endl;
}