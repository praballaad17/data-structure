#include<bits/stdc++.h>

using namespace std;

void insert(vector<int>& a,  int val ) {
	a.push_back(val);
	int n = a.size()-1;
	cout<<"size"<<n<<a[n]<<endl;
	while(n > 1) {
		int parent = (n)/2;
		if(a[parent] < a[n]) {
			swap(a[parent], a[n]);
		}
			n = parent;
	}
}

//delte front of queue / root of tree
void deleteheap(vector<int>& a) {
	int n=a.size()-1;
	a[1] = a[n];
	a.pop_back();
	int i=1;
	while(i< n) {
		int l=0, r=0;
		if(i*2 < n)
			 l = a[i*2];
		if((i*2+1) < n) 
			 r= a[i*2+1];
		int lar = l < r ? i*2+1 : i*2;
		if(a[i]<a[lar]) {
			swap(a[lar], a[i]);
			i=lar; 
		} else {
			break;
		}
	}
}

void display(vector<int> v) {
	for(int i=0;i<v.size();i++) {
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main() {
	vector<int> v={0};
	insert(v,10);
	display(v);
	insert(v,20);
	display(v);

	insert(v,30);
	display(v);
	
	insert(v,5);
	display(v);
	insert(v,50);
	display(v);
	insert(v,60);
	display(v);
	
	deleteheap(v);
	display(v);
}