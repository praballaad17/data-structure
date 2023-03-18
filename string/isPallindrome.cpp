#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int val) :data{val}, next{NULL} {}
};

bool isPallindrome(Node* head) {
    stack<int> s;
        queue<int> q;
        
        while(head) {
            s.push(head->data);
            q.push(head->data);
            head=head->next;
        }
        
        while(q.size()) {
            if(s.top() != q.front()) {
                return false;
            }
            s.pop();
            q.pop();
        }
        return true;
}


// Driver code
int main()
{
    // int arr[] = {2,7,1,4,1,7,8,2,8};
    // int arr_size = sizeof(arr)/sizeof(arr[0]);
    Node* head= new Node(10);
    head->next = new Node(11);
    head->next->next = new Node(11);
    head->next->next->next = new Node(10);

    cout<< isPallindrome(head);
    return 0;
}