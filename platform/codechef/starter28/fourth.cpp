#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<bits/stdc++.h>
#include <cmath>

using namespace std;



int main() {
	int t;cin>>t;

    while (t > 0) {
       int n;cin>>n;
       if(n == 2) {
        cout<<"-1"<<endl;
       }
       else if(n % 2 != 0) {
        for(int i=0;i<n;i++) {
            cout<<i+1<<" ";
        }
       }
       else {
        cout<<"2"<<" 1"<<" 3 ";
            for(int i=4;i<=n;i++) {
            cout<<i<<" ";
        }
       }
        cout<<endl;

        t--;
    }
	 return 0;
}