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
	string ans[t];
	 
	 while (t > 0) {
	 	int n=0,x=0,count=0;
	 	cin>>n;
	 	int arr[2*n];
	 	
	 	for(int i=0;i<2*n;i++) {
	 		int a=0;
	 		cin>>a;
			if(a%2==0) {
				count++;
			}	 		
	 	}
	 	if(count%2==0) {
	 		ans[t-1] = "YES";
	 	}
	 	else{
	 		ans[t-1] = "NO";
	 	}
		
	    t--;
	 }	
	 while (i>0) {
	 	cout<<ans[i-1]<<endl;
	 	i--;
	 }
	 
	 return 0;
}
