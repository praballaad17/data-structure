#include<bits/stdc++.h>

using  namespace std;


repeatedNumber( vector<int> &num) {
    int n=num.size();
    // 4 3 2 5 2
    // vector<int> num = a;
    
    for(int ele: num) {
        num[ele%n] += n;
    }
    for(int i=0;i<n;i++) {
        if(num[i] > n*2) {
            return i;
        }
    }
    
    return -1;
}



int main() {
	vector<int> v {4, 0, 1, 2, 3};
	cout<<repeatedNumber(v);

	// cout<<v[1]<<endl;
}