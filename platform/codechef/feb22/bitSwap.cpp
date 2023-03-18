O#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

bool countMinSwap(vector<int> arr) {
	int n =0;
	n= arr.size();
	vector< pair<int,int> > ap;
	
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
		while(!visited[node]) {
			visited[node] =true;
			int next_node= ap[node].second;
			int node_number = ap[node].first;
			int next_node_number = ap[next_node].first;
			if((node_number & next_node_number) == 0 ) {
//				cout<<"and operator works"<<node_number<<next_node_number<<endl;
//				ans.assign("NO");
				return false;
			}
			node=next_node;	
		}
	
	}
//		ans.assign("YES");
	return true;
}

int main() {
	int t=0,i=0;
	string ans[t];
	 cin>>i;
	 t=i;
	 
	 while (t > 0) {
//	 	cout<<t<<endl;
	 	int n=0;
	 	vector<int> arr;
	 	cin>>n;
		for (int k=0;k<n;k++) {
		 	int a=0;
		 	cin>>a;
		 	arr.push_back(a);
	 	}
	 	if(countMinSwap(arr)) {
//	 		cout<<"YES"<<endl;
	 		ans[t-1]="YES";
		 }
	 	else {
//	 		cout<<"NO"<<endl;
	 		ans[t-1]="NO";
		 }
	 	
//	 	ans[t-1]=countMinSwap(arr);
//	 	cout<<ans[t-1];
	    t--;
	 }	
	 while (i>0) {
	 	cout<<ans[i-1]<<endl;
	 	i--;
	 }
	 
	 return 0;
}
