#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<bits/stdc++.h>
#include <cmath>

using namespace std;



int main() {
	int t=0,i=0;
	 cin>>i;
	 t=i;
	vector<vector<char> > result(t);
	 
	 while (t > 0) {
	 	int n;cin>>n;
	 	string a,b;cin>>a>>b;
	 	vector<char> ans(2*n);
	 	int front=0,back=2*n-1;
	 	int starta=0,enda=n-1;
	 	int startb=0,endb=n-1;
	 	sort(a.begin(),a.end());
	 	sort(b.begin(), b.end());
	 	reverse(b.begin(), b.end());

	 	for(int i=0;i<2*n;i++) {
	 		if((i%2) == 0) {
	 			//alice
	 			// if(startb <= endb && a[starta]>=b[startb]) {
	 			if(a[starta]>=b[startb]) {
	 				ans[back --] = a[enda --];
	 			}
	 			else{
	 				ans[front ++] = a[starta ++];
	 			}
	 		}
	 		else{
	 			// if(starta <= enda && a[starta]<b[startb]) {
	 			if( a[starta]<b[startb]) {
	 				ans[front ++] = b[startb ++];
	 			}
	 			else{
	 				ans[back --] = b[endb --];
	 			}
	 		}
	 	}
	 	for(char ch : ans) {
	 		cout<<ch;
	 	}
	 	cout<<endl;
	 	result[t-1] = ans;
		
	    t--;
	 }	
	 // for(int i=0;i<result[i].size();i++) {
	 // 	for(int j=0;j<result[i].size();j++)
	 // 		cout<<result[i][j];
	 // 	// i--;
	 // }
	 
	 return 0;
}
