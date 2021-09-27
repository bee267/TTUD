#include<iostream>
using namespace std;

int main(){
	unsigned long long int a,b,a0,b0,a1,b1,c0,c1;
	cin >> a >> b;
	
	a0 = a/10;
	b0 = b/10;
	c0 = a0+b0;
	
	a1 = a%10;
	b1 = b%10;
	c1 = a1+b1;
	
	if (c0==0) cout << c1;
	else if (c1>=10) cout << c0 + 1 << c1%10; 
	else cout << c0 << c1;
}
