#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long int a,b,c,d,t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>d;
		if(c!=d && a!=b)
		{
			if(abs(b-a)%abs(c-d)==0) 
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		}
		else if(a==b && c==d)
			cout<<"YES"<<endl;
		else 
		    cout<<"NO"<<endl;
	}
}
