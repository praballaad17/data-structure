#include<iostream>

using namespace std;

int subarraySum(int *nums , int k) {
        int count = 0;
        
        for(int i=0; i<sizeof(nums);i++) {
            int sum=nums[i];
            if(sum==k){
                count++;
            }
            for(int j=i+1; j<sizeof(nums);j++) {
                if(sum+nums[j]==k){
                    count++;
                    
                }
                sum +=nums[j];
                 if(sum+nums[j] >k){
                    break;
                }
            }
        }
        return count;
    }
    
int main() {
	int a[] ={1,2,3,4,5,6};
	int n = 0;
	 n = subarraySum(a, 3);
	cout<<n;
}
