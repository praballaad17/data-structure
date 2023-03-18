#include <algorithm>
#include <iostream>
#include<cstring>
#include<vector>


using namespace std;

string getTokenAtk(string str, int key) {
	char *s = strtok( (char*)str.c_str()," ");
	while(key>1) {
		s= strtok(NULL, " ");
		key--;
	}

	return (string)s;
}

int stringToInt(string s) {
	int p=1;
	int ans=0;
	for(int i=s.length();i>=0;i--) {
		ans += ((s[i]-'0')*p);
		p *=10;
	}
	return ans;
}

bool numericComp(pair<string, string> s1, pair<string, string> s2) {
	string key1=s1.second;
	string key2=s2.second;
	cout<<key1<<key2<<endl;
	cout<<"int"<<stringToInt(key1)<<endl;
	return stringToInt(key1) < stringToInt(key2);
}

bool lexicoComp(pair<string,string> s1, pair<string,string> s2) {
	string key1=s1.second;
	string key2=s2.second;

	return key1 < key2;	
}

int main(int argc, char const *argv[])
{
	/* code */
	int n;cin>>n;
	cin.get();
	vector<string> v;
	for(int i=0;i<n;i++) {
		string temp;
		getline(cin,temp);
		v.push_back(temp);
	}
	int key;cin>>key;
	string reverse, type;
	cin>>reverse>>type;
	cout<<reverse<<type<<endl;
	//1.get token/key
	vector<pair<string, string>> vp;
	for(int i=0;i<n;i++) {
		vp.push_back({v[i],getTokenAtk(v[i],key)});
		cout<<"token: "<<getTokenAtk(v[i],key)<<endl;
	}


	//2.sort
	cout<<type<<endl;
	if(type=="numeric") {
		cout<<"in sort"<<endl;
		sort(vp.begin(),vp.end(),numericComp);
	}
	else {
		sort(vp.begin(),vp.end(),lexicoComp);
	}

	for(int i=0;i<n;i++) {
		cout<<vp[i].first<<endl;
	}
	
	return 0;
}