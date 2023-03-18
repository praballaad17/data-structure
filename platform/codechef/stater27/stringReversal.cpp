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
	
	 
	 while (t > 0) {
	 	
		string s;cin>>s;
		string rev = s;
		int ans=0;
		reverse(rev.begin(),rev.end());
		int n = s.length();
		for(int j=0, i=0;i<n;) {
			if(s[i] != rev[j]) {
				i++;
				ans++;	
			} 
			else{
				i++;
				j++;
			}
		}
		cout<<ans<<endl;
	    t--;
	 }	
	
	 
	 return 0;
}