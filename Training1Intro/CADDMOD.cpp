#include<iostream>
using namespace std;
int main(){
    unsigned long long a, b;
    const int C = 1000000007;
    cin >> a >> b;
    unsigned long long a0 = a%C;
    unsigned long long b0 = b%C;
    cout << (a0+b0)%C;
    return 0;
}
