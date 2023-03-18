#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node* SortedInsert(Node* head, int x) {
    Node* p=head;
    Node* q=NULL;
    Node* t= new Node(x);

    if(head==NULL) {
        head=t;
    }
    else{
        if(x<head->data) {
            t->next=head;
            head=t;
        }
        else {
            while(p and p->data<x) {
                q=p;
                p=p->next;
            }
            if(!p) {
                q->next=t;
            }
            else {
                t->next=p;
                q->next=t;
            }
        }
    }
    return head;
}

void PrintList(Node* head) {
        cout<<"[";
    while(head) {
        cout<<head->data<<", ";
        head=head->next;
    }
    cout<<"]";
    return;
}

Node* DeleteNode(Node* head, int pos) {
    Node* p=head;
    Node* q=NULL;

    if(pos ==1) {
        // p= head;
        head=head->next;
        delete p;
    } else {
        for(int i=0;i<pos-1 && p;i++) {
            q=p;
            p=p->next;
        }
        if(p) {
            q->next=p->next;
            delete p;
        }
        else {
            cout<<"out of bound"<<endl;
        }
    }

    return head;
} 

int main() {
   Node* head = nullptr;
   // int num=0;

   // while(cin) {
   //  cout<<"enter a interger (q to quit)"<<endl;
   //  cin>>num;

   //  if(cin) {
   //      head = SortedInsert(head, num);
   //  }

   // }
   head = SortedInsert(head, 5);
   head = SortedInsert(head, 6);
   head = SortedInsert(head, 1);
   head = SortedInsert(head, 2);
   head = SortedInsert(head, 10);
   PrintList(head);

   // head = DeleteNode(head,1);
   head = DeleteNode(head,6);
   PrintList(head);
    return 0;
}

