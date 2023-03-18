#include <iostream>
#include <string>
#include <vector>
#include<algorithm>

using namespace std;


int main() {
	int i=0;
	string ans[i];
	cin>>i;
	
	 for(int t=0;t<i;t++){
	 	int n=0;
	 	cout<<"in loop"<<endl;
	 		
	 	cin>>n;
	 	pair<int,int> ap[n];
	 	cout<<n<<endl;
		for (int k=0;k<n;k++) {
			int z=0;
		 	cin>>z;
//		 	ap[k].second=k;
			ap[k]=make_pair(z,k);
			cout<<"input"<<ap[k].first<<" second "<<ap[k].second<<endl;
	 	}
	 	
		cout<<n<<endl;
	 	sort(ap, ap+n);
		cout<<"after sort: "<<n;
		bool visited[n]={false};
		cout<<visited[0];
		for(int k=0; k<n; k++) {
			int old_position=ap[k].second;
				
			if(visited[k]==true or old_position==k) {
				continue;
			}
			
			int node=k;
			int next_node= ap[node].second;
			int node_number = ap[node].first;
			int next_node_number = ap[next_node].first;
			if((node_number & next_node_number) == 0 ) {
				ans[t-1]="NO";
				break;
			}
			else{
				while(!visited[node]) {
					visited[node] =true;
					node=next_node;		
				}
			}
			
			ans[t-1]="YES";
		}	
	   
	 }	
	 while (i>0) {
	 	cout<<ans[i-1]<<endl;
	 	i--;
	 }
	 return 0;
}
