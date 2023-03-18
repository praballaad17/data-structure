#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main() {
	vector<int> a{-8,2,3,-6,10};
    vector<int> ans;
	list<int> l{};
    int n =a.size();
    cout<<n<<endl;
	int k = 3;
	int i=0,j=0;
	while(j<n) {
		if(a[j] < 0) {
                    l.push_back(a[j]);
                }
                if(j-i+1 < k) {
                    j++;
                }
                else if(j-i+1 == k) {
                    if(l.size() == 0) {
                        ans.push_back(0);
                        i++;
                        j++;
                    }
                    else {
                         ans.push_back(l.front());
                        if(a[i] == l.front()) {
                           
                            l.pop_front();
                        }
                            i++;
                            j++;
                    }
                } 
	} 

	for(int z=0;z<ans.size();z++) {
		cout<<ans[i]<<" ";
	}
return 0;

}