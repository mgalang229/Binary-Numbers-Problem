#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[1000000], n, cnt, i, h;

void solve(){
	cin >> n;
	i = cnt = 0;
	while(n > 0){
		a[i] = n%2;
		n /= 2;
		i++;
		cnt++;
	}
	h = 0;
	for(i = cnt-1; i >= 0; i--){
		if(a[i] == 1){
			n++;
			if(n > h){
				h = n;
			}
		} else{
			n = 0;
		}
	}
	cout << h << "\n";
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	solve();
	return 0;
}
