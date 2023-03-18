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
	int ans[t]={0};
	 
	 while (t > 0) {
	 	float n=0,x=0,y=0;
	 	cin>>n>>x>>y;
	 	float b=0;
	 	int m=INT_MAX;
	 	if((n - 100*b) < 0) {

	 	}
	 	while (true) {
	 		if((n - 100*b) < 0) {
	 			int z = b*x;
	 			m = min(m,z);
	 			break;
	 		}

	 		// cout<<"b: "<<b<<"n: "<<n<<endl;
	 		float c = (n-100*b)/4;
	 		 int d = ceil(c);
	 		// cout<<"c :"<<d<<endl;
	 		
	 		int temp = x*b + y*d;
	 		// cout<<temp<<endl;
	 		m = min(m, temp);
	 		b++;
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
