#include<bits/stdc++.h>
using namespace std;

int main(){
	unsigned long long a, b, t1, t2, r1, r2, c1, c2;
	cin >> a >> b;
	t1 = a/10; t2 = b/10;
	r1 = a%10; r2 = b%10;
	c1 = t1 + t2;
	c2 = r1 + r2;
	if (c1==0) cout << c2;
	else{
		if (c2>=10) cout << c1+1 << c2%10;
		else cout << c1 << c2;
	}
	return 0;
}
