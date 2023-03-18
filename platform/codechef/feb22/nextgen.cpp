#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int t=0,i=0;
	int arr[] = {0};
	 cin>>i;
	 t=i;
	 string ans[t];
	 while (t > 0) {
	 	int n=0,count=0,j=0;
	 	string str;
	    cin>>n;
	    j=n;
	    cin>>str;
	    while(j > 0) {
	    	string check = "1";
//	    	cout<<"string element: "<<str[j-1]<<endl;
	    	if(str[j-1] == check[0]) {
	    		count++;
			}
			j--;
		}
//		cout<<"count: "<<count<<endl;
		if( n%2 == 0) {
			if(count%2==0)
				ans[t-1]="YES";
			else if(count*2 == n)
				ans[t-1]="YES";
			else
				ans[t-1]="NO";
		}
		else if (n%2 !=0) {
			ans[t-1]="YES";
		}
		else {
			ans[t-1]="NO";
		}
	    t--;
	 }	
	 while (i>0) {
	 	cout<<ans[i-1]<<endl;
	 	i--;
	 }
}
