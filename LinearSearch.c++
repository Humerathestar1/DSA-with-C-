
#include <iostream>
using namespace std;
int linearSearch( int arr[],int sz, int target){
    for (int i=0;i<sz;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
using namespace std;

int main() {
   int arr[] = { 2,4,6,8,9,12};
   int sz = 6;
   int target = 12;
   cout<<"Targetd value find at index : ";
cout<<linearSearch(arr,sz,target)<<endl;
    return 0;
}
