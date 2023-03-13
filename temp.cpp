#include <iostream>
using namespace std;

int main() {
    int n,m, sum = 0,minus=0;

    cout << "Enter a positive integer 1: ";
    cin >> n;
    cout << "Enter a positive integer 2: ";
    cin >> m;

    sum=m+n;
    minus=m-n;
    cout << "Sum = " << sum<< "minus = "<<minus;
    return 0;
}