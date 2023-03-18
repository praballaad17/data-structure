#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;



int main() {
	int t=0,i=0;
	 cin>>i;
	 t=i;
	int ans[t]={0};
	 
	 while (t > 0) {
	 	int n=0;
	 	cin>>n;
	 	ans[t-1] = n*10;
		
	    t--;
	 }	
	 while (i>0) {
	 	cout<<ans[i-1]<<endl;
	 	i--;
	 }
	 
	 return 0;
}
