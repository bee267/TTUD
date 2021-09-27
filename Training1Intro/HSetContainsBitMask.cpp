#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	unsigned long long a[n], b[n];
	for (int i=0; i<n; i++) cin >> a[i];
	int m; cin >> m;
	for (int j=0; j<m; j++) cin >> b[j];
	int count = 0;
	for (int j=0; j<m; j++){
		for (int i=0; i<n; i++) if (a[i]==b[j]){
			count++;
			break;
		}
	}
	if (count==m) cout << "1";
	else cout << 0;
}
