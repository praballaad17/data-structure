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
	 	int b=0,c=0;
	 	cin>>b>>c;
	 	int ans = __gcd(b,c);

	 	
    	
	 	
	 	cout<<c/ans<<endl;
	 	
	 	
	    t--;
	 }	
	
	 
	 return 0;
}
