#include<iostream>
#include <cstdlib>
#include<vector> 

using namespace std;

 int findPairs(vector<int>& nums, int k) {
        int count = 0;
        for(int i=0;i<nums.size();i++) {
            for(int j=i; j<nums.size();j++) {
                if (abs(nums[i] - nums[j]) == k) {
				count++;
				cout<<"pair: ("<<nums[i]<<","<<nums[j]<<")"<<endl;
				}
                    
            }
        }
    return count;
    }

int main() {
	
	vector<int> nums;
	

	nums.push_back(3);
	nums.push_back(1);
	nums.push_back(4);
	nums.push_back(1);
	nums.push_back(5);
	int n;
	 n = findPairs(nums, 2);
	cout<<"total pairs: "<<n;
}
