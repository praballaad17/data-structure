#include <algorithm>
#include <iostream>
#include<cstring>
#include<vector>


using namespace std;

bool isSubSeqnce(string s1, string s2) {
	int i = s1.length();
	int j= s2.length();

	while(i>=0 && j>=0 ) {
		if(s2[j] == s1[i]) {
			i--;j--;
		}
		else{
			i--;
		}
	}
	if(j == -1) {
		return true;
	}	
	return false;
}

int main() {
	string s1;cin>>s1;
	string s2;cin>>s2;

	cout<<isSubSeqnce(s1, s2);

	return 0;
}