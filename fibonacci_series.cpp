#include<iostream>
using namespace std;
int main() {
    int n, a = 0, b = 1, next_number;
    cout << "Enter number of terms you want to generate in Fibonacci series : ";
    cin >> n;
    int count = 1;
   while (count <= n ) {
        cout << a << " ";
        next_number = a + b;
        a = b;
        b = next_number;
        count++;
    }
    cout << endl;
    return 0;
}