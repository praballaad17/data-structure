#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;


int main() {
	int t=0,tt=0;
	string ans[t];
	 cin>>t;
	 tt=t;
	 
	 while (t > 0) {
	 	int n=0;
	 	
	 	vector< pair<int,int> > ap;	
	 	cin>>n;
	 	
		for (int k=0;k<n;k++) {
		 	int a=0;
		 	cin>>a;
		 	ap.push_back(make_pair(a, k));
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
					ans[t-1]="NO";
					break;
				}
				node=next_node;	
			}
			ans[t-1]="YES";
		}
	 	
	    t--;
	 }	
	 while (tt>0) {
	 	cout<<ans[tt-1]<<endl;
	 	tt--;
	 }
}
