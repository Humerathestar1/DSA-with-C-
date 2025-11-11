
#include <iostream>
#include<vector>
using namespace std;

int main() {
   vector<char>vector;
   cout<<"size = "<<vector.size()<<endl;
   vector.push_back(25);
   vector.push_back(35);
   vector.push_back(45);
   
 cout<<"After push back size = "<<vector.size()<<endl;
   for(int val:vector){
       cout <<val<<endl;
   }
    

    return 0;
}
