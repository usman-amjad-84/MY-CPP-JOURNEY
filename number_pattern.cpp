#include<iostream>
using namespace std;
int main () {
    int count = 1;
    int n;
    while (count <= 3) {
        cout << "===== Attempt "<< count << " =====" << endl;
        cout<< "Enter a number :";
        cin>>n;
        count++;
    
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= (n -i); j++) {
       // cout<< i << '\n';
            cout << j << " ";
        }
        cout << '\n';
    }
}    
}