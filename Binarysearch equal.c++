#include<iostream>
using namespace std;

int main(){
    int n, med, x;
    cout << "Enter the length of the list: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the element you want to find: ";
    cin >> x;
    
    int lower = 0, high = n - 1;
    int result = -1;   

    while (lower <= high){
        med = (lower + high) / 2;

        if (arr[med] == x){
            result = med;       
            high = med - 1;     
        }
        else if (arr[med] < x){
            lower = med + 1;
        }
        else {
            high = med - 1;
        }
    }

    if (result != -1)
        cout << "Found " << x << " at index value " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
