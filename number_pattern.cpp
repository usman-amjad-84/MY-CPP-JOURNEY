#include<iostream>
using namespace std;
int main () {
    int n;
    cout<< "Enter a number :";
    cin>>n;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= (n -i); j++) {
       // cout<< i << '\n';
            cout << j << " ";
        }
        cout << '\n';
    }
int m;
    cout << "Enter a number : ";
    cin >> m;
    for (int i = 0; i <= m; i++) {
        for (int j= 0; j <= i; j++) {
            cout << j << " ";
        }
        cout << '\n';
} 
int o;
    cout << "Enter a number : ";
    cin >> o;
    for (int i = o; i >= 0; i--) {
        for (int j= 0; j <= i; j++) {
            cout << j << " ";
        }
        cout << '\n';
} 
}    
