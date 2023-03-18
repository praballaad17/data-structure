#include<bits/stdc++.h>

using namespace std;

int main () {
	int t;
	cin>>t;
	string aplh = "abcdefghijklmnopqrstvwxyz";
	while(t--) {
		int n, k;
		cin>>n>>k;
		vector<string> s;
		unordered_map<char,int> mp;
		int cnt=1;
		string ans;
		for(int i=1;i<=n;i++) {
			char ch;
			cin>>ch;
			mp[ch]++;
		}
			
		for(int i=1;i<=n;i++) {
			if(cnt < i/k) {
				cnt++;
				cout<<cnt<<endl;
			}
			if(cnt >= i/k) {
				int temp=k;
				int j=0;
				while(temp) {
						if(mp.find(aplh[j]) != mp.end() && mp[aplh[j]] != 0) {
							mp[aplh[j]]--;
							j++;
							temp--;
							cout<<aplh[j]<<endl;
						}
						else {
							ans.push_back(aplh[j]);
							j++;
							cout<<"push"<<aplh[j]<<endl;
						}
				}
			}
			
		}
		cout<<ans<<endl;
	}
}