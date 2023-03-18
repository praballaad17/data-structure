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
	 	int n=0,x=0,count=0;
	 	cin>>n>>x;
	 	int m=x;
	 	count = x;

	 	for(int i=0;i<n;i++) {
	 		int a=0;
	 		cin>>a;
	 			count = count + a;
	 		// if(count > max) {
	 		// 	max = count;
	 		// }
	 		m = max(count, m);

	 	}
	 	ans[t-1] = m;
		
	    t--;
	 }	
	 while (i>0) {
	 	cout<<ans[i-1]<<endl;
	 	i--;
	 }
	 
	 return 0;
}
