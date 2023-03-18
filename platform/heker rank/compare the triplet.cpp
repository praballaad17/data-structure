#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 int main()
 {
 	int a[3],b[3];
 	int c1=0,c2=0;
 	for(int i=0;i<3;i++)
 	cin>>a[i];
 	for(int j=0;j<3;j++)
 	cin>>b[j];
 	for(int k=0;k<3;k++)
	{
		if(a[k]>b[k])
		c1+=1;
		if(a[k]<b[k])
		c2+=1;		
	}
	cout<<c1<<" "<<c2;
 	
	return 0;
 	
 }
