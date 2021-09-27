#include<bits/stdc++.h>
using namespace std;

long long max(int a, int b){
	if (a>b) return a;
	else return b;
}

int main(){
	int n; cin >> n;
	long long a[n];
	for (int i=0; i<n; i++) cin >> a[i];
	// Kadane's algorithm
	int result = LLONG_MIN;
	int sum=0;
	for (int i=0; i<n; i++){
		sum = max(a[i],sum+a[i]);
		result = max(sum,result);
	}
	cout << result;
}
