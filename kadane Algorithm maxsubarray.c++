
#include <iostream>
#include<vector>
#include<climits>
using namespace std;

class Subarray{
    public:
    int MaxSubArray(vector<int>&nums){
        int currsum=0, maxsum = INT_MIN;
        for(int val:nums){
            currsum+=val;
            maxsum = max(currsum,maxsum);
            if(currsum<0){
                currsum =0;
            }
            
        }
         return maxsum;
    }
   
};

int main() {
   vector<int>nums = {1, -2, 3, 4, -1, 2, 1, -5, 4};
   Subarray obj;
   cout<<"max subarray sum is : "<<obj.MaxSubArray(nums)<<endl;

   
    return 0;
}
