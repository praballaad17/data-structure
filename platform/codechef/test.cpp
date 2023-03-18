#include<iostream>
using namespace std;
int main(){
	int t,n,a,b,sa=0,sb=0,i;
	cin>>t;
	int pa[t]={0},pb[t]={0};
	for(i=0;i<t;i++)
	{
		cin>>n;
		while(n--)
		{
			cin>>a>>b;
			while(a>0){
			sa+=a%10;
			a=a/10;
			}
			while(b>0){
			sb+=b%10;
			b=b/10;
			}
			if(sa>sb)
			pa[i]+=1;
			else if(sb>sa)
			pb[i]+=1;
			else{
			pa[i]+=1;pb[i]+=1;}
		}
		
		
}
i=t;
t=0;
		while(t<i)
		{
			if(pa[t]>pb[t])
			cout<<"\n0"<<" "<<pa[t];
			else if(pa[t]<pb[t])
			cout<<"\n1"<<" "<<pb[t];
			else
			cout<<"\n"<<"2"<<" "<<pa[t];
			t++;
		}
		}
