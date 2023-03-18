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
	 	int n=0;cin>>n;
		string s;cin>>s;
		int count=0;
		for(int i=0;i<n;i++) {
			if(s[i+1]!=s[i]) {
				count++;
			}
		}
		cout<<count<<endl;
	    t--;
	 }	
	
	 
	 return 0;
}