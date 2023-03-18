#include<iostream>
#include <vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int countMinSwap(vector<int> arr) {
	int n =0;
	n= arr.size();
	vector< pair<int,int> > ap;

	int ans=0;
	
	for(int i=0; i<n; i++) {
		ap.push_back(make_pair(arr[i], i));
	}
	

	sort(ap.begin(), ap.end());
	vector<bool> visited(n,false);

	for(int i=0; i<n; i++) {
		int old_position=ap[i].second;
		
		
		if(visited[i]==true or old_position==i) {
			continue;
		}
		
		int node=i;
		int cycle=0;
		while(!visited[node]) {
			visited[node] =true;
			int next_node= ap[node].second;
			node=next_node;
			cycle++;	
		}
		ans +=(cycle-1);
	}
	return ans;
}

int main() {
	int n=0;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++) {
		int z=0;
		cin>>z;
		arr.push_back(z);
	}
//	arr.push_back(5);
//	arr.push_back(4);
//	arr.push_back(3);
//	arr.push_back(2);
//	arr.push_back(1);
	int a =0;
	
	a = countMinSwap(arr);
	cout<<a<<endl; 
	cout<<"after";
	return 0;
}
