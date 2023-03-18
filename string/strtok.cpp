#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

int main() {
	char s[10000];
	cin.getline(s,1000);

	char *token = strtok(s, " ");
	cout<<"token "<<*token<<endl;
	while(token !=NULL) {
		cout<<token<<endl;
		token = strtok(NULL, " ");
	}
	return 0;
}