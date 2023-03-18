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
       int holi=8;
        vector<int> wend{6,7,13,14,20,21,27,28};
       vector<int> dates;
       for(int i=0;i<n;i++) {
        int z=0;cin>>z;
        dates.push_back(z);
       }
       int j=0,i=0;
       sort(dates.begin(),dates.end());
       while(i<9 && j<n) {
        // cout<<"print "<<dates[j]<<" "<<end[i]<<endl;
            if(dates[j] < wend[i]) {
                j++;
                holi++;
            }
            else if (dates[j] == wend[i]) {
                i++;
                j++;
            }
            else {
                i++;
            }
       }
       cout<<holi<<endl;
        t--;
    }
	 return 0;
}