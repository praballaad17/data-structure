#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

 void solve(int one,int zero,int n, string op, vector<string>& v) {
            if(n == 0) {
                v.push_back(op);
                return;
            }
                string op1 = op;
                op1.push_back('1');
                solve(one+1,zero,n-1,op1,v);
            
            if(one > zero) {
                string op2 = op;
                op2.push_back('0');
                solve(one,zero+1,n-1,op2,v);
            }
            return;
    }


int main() {
	 vector<string> v;
	 int a;
	 	cin>>a;
        int one =0;
        int zero=0;
        string op="";
        solve(one, zero, a ,op,v);
       

        for(int i=0;i<v.size();i++) {
        	cout<<v[i]<<endl;
        }
        return 0;
}