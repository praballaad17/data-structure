#include<bits/stdc++.h>

using namespace std;

int main () {
	string s = "playgroundrulesgro";

	string t = "pro";
	int idx;
	cout<<s<<endl;
	while((idx = s.find("gro")) != string::npos) {
		s.replace(idx, t.length(), t);
	}

	cout<<s<<endl;
 }