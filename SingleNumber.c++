
#include <iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int SingleNumber(vector<int>&nums){
        int ans=0;
        for(int val : nums){
            ans = ans ^ val;
        }
        return ans;
    }
};
int main() {
    Solution obj;
    vector<int> nums = {2, 2, 1};
    cout <<"Unique element is : "<< obj.SingleNumber(nums);
    return 0;
}
