#include <iostream>
#include<vector>
#include <unordered_map>
using namespace std;



int solve(vctor<int> a , int k) 
    { 
        // Complete the function
        int i=0,j=0,m=0;
        long long sum=0;
        while(j<N) {
            sum +=a[j];
            if(sum < k){
                j++;
            }
            if(sum == k){
                m = max(m,j-i+1);
                j++;
            }
            if(sum > k) {
                while(sum > k) {
                    sum -= a[i];
                    i++;
                }
            }
        }
    
    return m;    
    } 

 int main() {
	vector<int> v={5,8,14,2,4,12};

	cout<<solve(v,5);
	return 0;
}