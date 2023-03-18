#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
	int val;
	struct TreeNode* left;
	struct TreeNode* right;

	TreeNode(int data) {
		val=data;
		left=NULL;
		right=NULL;
	}
};


void calPotr(TreeNode* node, TreeNode **prev, TreeNode **first, TreeNode **mid, TreeNode **last ) {
    if(node == NULL) {
        return;
    }
    
    calPotr(node->left, prev, first, mid, last);
    if(*prev && node->val < (*prev)->val) {
        if(!*first) {
            *first = *prev;
            *mid = node;
        }
        else {
            *last = node;
        }
    }
        *prev = node; 
    calPotr(node->right, prev, first, mid, last);
}

vector<int> recoverTree(TreeNode* A) {
    TreeNode *last, *first, *prev, *mid;
    first = NULL;
    last = NULL;
    prev = NULL;
    mid = NULL;
    vector<int> ans;
    calPotr(A, &prev, &first, &mid, &last);
    if(first and last) {
        ans.push_back((first)->val);
        ans.push_back((last)->val);
        return ans;
    } else if(first and mid) {
        ans.push_back((mid)->val);
        ans.push_back((first)->val);
        return ans;
    }
}

int main() {
	struct TreeNode* root;
	root = new TreeNode(1);
	root->left=new TreeNode(2);
	root->right=new TreeNode(3);
	root->left->left=new TreeNode(4);
	root->left->right=new TreeNode(5);
	root->right->right=new TreeNode(6);

	vector<int> ans =  recoverTree(root);
	for(int i=0;i<ans.size();i++) {
		cout<<ans[i]<<" ";
	}
}