#include<iostream>
#include <vector>
#include<bits/stdc++.h>


using namespace std;

    void solve(vector<int> nums, int idx, vector< vector<int> >& result) {
        if(idx == 0 ) {
            result.push_back({});
            result.push_back({nums[idx]});
            
        }
        else {
            solve(nums, idx-1,result);
            int n = result.size();
            for(int i=0; i<n; i++) {
                vector<int> v = result[i];
                v.push_back(nums[idx]); 
                result.push_back(v);
            }
        }
        
    }
    

    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        vector< vector<int> > result;
         vector<vector<int>> v;
        set<vector<int>> s;
        sort(arr.begin(), arr.end());
        solve(arr, n-1 , result);
        for(int i=0;i<result.size();i++) {
            auto it =s.find(result[i]);
            if(it == s.end()) {
                s.insert(result[i]);
                v.push_back(result[i]);
            }
            
        }
        
       
        return v;
    }



int main() {
	vector<int> v;
	v.push_back(2);
	v.push_back(1);
	v.push_back(2);

   vector<vector<int>> r;
 	r =	AllSubsets(v, 3);

    cout<<"result recieves"<<endl;
	for(int i=0; i<r.size();i++) {
        for(int j=0;j<r[i].size(); j++) {
            cout<<r[i][j]<<" ";
        }
        cout<<endl;
	}
	
	
	return 0;
}
