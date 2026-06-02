#include<iostream>
using namespace std;

int min(int arr[], int size) {
     int mini = arr[0];
     for (int i = 0; i < size; i++) {
        if (mini >= arr[i]) {
            mini = arr[i];
        }
     }
return mini;
}

int max(int arr[], int size) {
    int maxi = arr[0];
    for (int i = 0; i < size; i++){
        if (maxi <= arr[i]) {
            maxi = arr[i];
        }
    }
    return maxi;
}

int main () {
    int arr[5];
    cout << "Enter any 5 numbers : ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    // min(arr, 5);
    cout <<"The minimum number is : " << min(arr, 5) << endl;
    cout <<"The smallest number is : " << max(arr, 5) << endl;
}