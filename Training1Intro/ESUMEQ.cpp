#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	const int C = 1000000007;
	unsigned long long a, sum=0;
	for (int i=0; i<n; i++){
		cin >> a;
		sum += a%C;
	}
	cout << sum%C;
	return 0;
}
