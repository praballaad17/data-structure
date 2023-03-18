#include<iostream>
#include<cstring>
#include<vector>


using namespace std;
	
	void solve(string &s) {
		int spaces =0;
		for(int i=0;i<s[i]!='\0';i++) {
			if(s[i] == ' ')
				spaces++;
		}
		cout<<"spaces: "<<spaces<<endl;
		int idx = s.length() + 2*spaces;
		s[idx] = '\0';
		for(int i=s.length()-1;i>=0; i--) {
			if(s[i]==' ') {
				s[idx-1]='0';
				s[idx-2]='2';
				s[idx-3]='%';
				idx =idx -3;
			}
			else {
				s[idx-1]=s[i];
				idx--;
			}
		}
	}

int main() {
	string s="this is the day ?";
	solve(s);
	cout<<s;
	return 0;
}