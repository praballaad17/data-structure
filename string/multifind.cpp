#include<iostream>
#include<string>
#include<vector>


using namespace std;


	void solve(string s,int idx, string word, int i) {
		int temp = s.find(word,idx);
		if(temp == -1) {
			cout<<word<<" has not found";
			return;
		}
		cout<<i<<"th occurece of "<<word<<" is at "<<temp<<endl;
		solve(s, temp+1,word,++i);
		return;
	}

int main() {
	string s = "this is the cool part of the new world in whivh the towet of the person in the some place of the contry";
	string f;
	getline(cin, f);
	solve(s,0,f,0);
	


	return 0;
}