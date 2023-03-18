#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<bits/stdc++.h>
#include <cmath>

using namespace std;

bool comp(pair<int,int> i,pair<int,int> j) {
	return i.first>j.first;
}


int main() {
	int t=0,i=0;
	 cin>>i;
	 t=i;
	
	 
	 while (t > 0) {
	 	int n=0,w=0,h=0;
	 	vector<pair<int,int>> mp;
	 	// unordered_map<int,int> mp;
	 	cin>>n>>w;
	 	for(int i=0;i<n;i++) {
	 		int j;cin>>j;
	 		mp.push_back(make_pair(j,i));
	 		// v.push_back(j);
	 	}
	 	sort(mp.begin(),mp.end(),comp);
	 	int i=0;
	 	while(w>0) {
	 		w -= mp[i].first;
	 		n--;
	 		i++;
	 	}
	 	cout<<n<<endl;
	    t--;
	 }	
	
	 
	 return 0;
}
