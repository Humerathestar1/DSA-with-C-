#include<iostream>
using namespace std;

int main(){
    int n, med, x;
    cout << "enter the length of the list ";
    cin >> n;

    int arr[n];
    cout << "enter elements in the array ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "enter the element you want to find" << endl;
    cin >> x;
    
    int lower = 0, high = n-1;
    while (lower <= high){
        med = (lower + high) / 2;

        if (arr[med] == x){
            cout << "Found " << x << " at index value " << med << endl;
            return 0;
        }
        else if (arr[med] < x){
            lower = med + 1;   
            }
        else {
            high = med - 1;    
    }
}
    cout << "Element not found" << endl; 
    return 0;
}
