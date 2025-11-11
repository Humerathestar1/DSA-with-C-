
#include <iostream>
#include<vector>
using namespace std;

int main() {
   vector<char>vector = {'a','b','c','d','e'};
   cout<<"size = "<<vector.size()<<endl;
   for(char val:vector){
       cout <<val<<endl;
   }
    

    return 0;
}
