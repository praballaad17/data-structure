#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int t=0,i=0;
	int arr[] = {0};
	 cin>>i;
	 t=i;
	 int ans[t] = {0};
	 while (t > 0) {
	 	int n=0,op=0,j=0,index=1;
	 	cin>>n;
	 	int arr[n] = {0};
	    while(j < n) {
	    	cin>>arr[j];
	  		if(arr[j] != index) {
	  			j++;
	  			index++;
			  }
			  else {
			  	index +=2;
			  	j++;
			  	op++;
			  }
		}
		ans[t-1]=op;
	    t--;
	 }	
	 while (i>0) {
	 	cout<<ans[i-1]<<endl;
	 	i--;
	 }
}
