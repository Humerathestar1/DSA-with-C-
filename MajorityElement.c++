#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums = {2,2,1,1,1,1,2,2,2};
    int n = nums.size();
    for(int val : nums){
        int frequency = 0;
        for (int el : nums)
      {
            if(el==val){
                frequency++;
            }
      }   
    if(frequency > n/2){
        cout<<"majority element is :"<<val<<endl;
        return 0;
    } 
}
cout<<"no majority element found"<<endl;
return 0;
}
