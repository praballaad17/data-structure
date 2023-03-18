#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void insert(vector<int>& v, int last) {
	if(v.size() == 0 || v[v.size()-1] <= last) {
		v.push_back(last);
		return;
	}
	int value = v[v.size()-1];
	v.pop_back();
	insert(v,last);
	v.push_back(value);
	return;
}


void sort(vector<int>& v) {
	if(v.size() == 1) {
		return;
	}
	int last = v[v.size()-1];
	v.pop_back();
	sort(v);
	insert(v, last);
	return;
}


int main() {
	vector<int> v;
	int n;
	cin>>n;
	cout<<"aray before sort: ";
	for(int i=0;i<n;i++) {
		int z=0;
		cin>>z;
		v.push_back(z);
		cout<<" "<<z;
	}
	
	sort(v);
	cout<<endl<<"ater sort: ";
	for(int i=0;i<n;i++) {
		cout<<" "<<v[i];
	}
	return 0;
}
