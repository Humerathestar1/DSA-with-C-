
#include <iostream>
#include<vector>
using namespace std;

int main() {
   vector<char>vector;
 
   vector.push_back(25);
   vector.push_back(35);
   vector.push_back(45);
   
 cout<<"After push back size = "<<vector.size()<<endl;
 vector.pop_back();
 
   for(int val:vector){
       cout <<val<<endl;
   }
   cout<<"After pop back size = "<<vector.size()<<endl;
 
    

    return 0;
}
