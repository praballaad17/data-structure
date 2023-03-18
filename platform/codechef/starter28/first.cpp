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
        int x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
        if(x1/y1 > x2/y2) {
            cout<<"-1"<<endl;
        }else if(x1/y1 == x2/y2) {
            cout<<"0"<<endl;
        }else {
            cout<<"1"<<endl;
        }

        t--;
    }
	 return 0;
}