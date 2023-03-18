#include<iostream>
#include<sstream>
#include<vector>

using namespace std;

int main() {
	string s;
	getline(cin,s);

	stringstream ss(s);
	string token;
	vector<string> tokens;
	while(getline(ss,token,' ')) {
			tokens.push_back(token);
		}
	for(string token : tokens)	{
		cout<<token<<endl;
	}

}