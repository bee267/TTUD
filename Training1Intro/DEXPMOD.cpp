
#include<bits/stdc++.h>
using namespace std;

int sqr(int x){
	return x*x;
}
int main(){
	unsigned long long a, b; cin >> a >> b;
	const int m = 1000000007;
	unsigned long long ans = 1;
	a %=m;
	b%=(m-1);
	while (b>0){
		if (b%2>0) ans = ans*a%m;
		a = a*a%m;
		b/=2;
	}
	cout << ans;
	return 0;
}
