#include <bits/stdc++.h>

using namespace std;
/**

 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

 TreeNode* findPred(TreeNode* root) {
  
    TreeNode* node = root->left;
    while(node->right != NULL && node->right != root) {
        node =node->right;
    }
    return node;
}

vector<int> inorderTraversal(TreeNode* node) {
    vector<int> ans;
    
    while(node) {
        if(!node->left) {
            ans.push_back(node->val);
            node=node->right;
        }
        else {
            TreeNode* pred;
            pred = findPred(node);
            if(pred->right == node) {
                pred->right == NULL;
                ans.push_back(node->val);
                node=node->right;
            } else {
                pred->right = node;
                node=node->left;
            }
        }
    }
    return ans;
}

vector<int> preorder(TreeNode* node) {
    vector<int> ans;

    while(node) {
        cout<<"node->val "<<node->val<<endl;
       

        if(!node->left) {
            ans.push_back(node->val);
            node=node->right;
        } else {

            TreeNode* pred = findPred(node);
            cout<<"pred "<<pred->val<<endl;
            if(pred->right == node) {
                pred->right == NULL;
                node=node->right;
                cout<<"control to right"<<endl;
            } else {
                pred->right = node;
                 ans.push_back(node->val);
                node=node->left;
                cout<<"control to left"<<endl;
            }            
        }
    }
    return ans;
}

// vector<int> postorder(TreeNode* node) {
//     vector<int> ans;

//     while(node) {
//         if(!node->left) {
//             // ans.push_back(node->val);
//             node=node->right;
//         } else {

//             TreeNode* pred = findPred(node);
//             if(pred->right == node) {
//                 pred->right == NULL;
//                 node=node->right;
//             } else {
//                 pred->right = node;
//                  ans.push_back(node->val);
//                 node=node->left;
//             }            
//         }
//     }
//     return ans;
// }

int main() {
    vector<int> ans;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->right = new TreeNode(6);
    root->right = new TreeNode(5);
    root->right->left= new TreeNode(4);
    root->left->left = new TreeNode(3);

    // ans = inorderTraversal(root);
    // for(int i=0;i<ans.size();i++) {
    //     cout<<ans[i]<<" ";
    // }

    vector<int> preans;
    preans = preorder(root);
    cout<<endl;
    cout<<"preorder: ";
    for(int i=0;i<preans.size();i++) {
        cout<<preans[i]<<" ";
    }    
    return 0;
}


