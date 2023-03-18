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
	 	int n=0,k=0;
	 	cin>>n>>k;
	 	vector<int> v;
	 	vector<int> ans;
	 	int j=0,i=1,start=0;
	 	for(int l=0;l<k;l++){
	 		int z=0;
	 		cin>>z;
	 		v.push_back(z);
	 		cout<<v[l]<<endl;
	 	}

	 	while(i<=n) {
	 		start =i;
	 		while(i<v[j]) {
	 			cout<<"push back"<<i+1<<endl;
	 			ans.push_back(i+1);	
	 			i++;
	 		}
	 		if(i==v[j]) {
	 			cout<<"push back"<<start<<endl;
	 			ans.push_back(start);
	 			i++;
	 		}
	 		j++;
	 		
	 	}
	 	for(int l=0;l<n;l++) {
	 		cout<<ans[l]<<" ";
	 	}
	    t--;
	 }	
	
	 
	 return 0;
}
