#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll n;
	cin>>n;
	cout<<n<<" ";
	while (n!=1){
		if (n%2==1)	n=3*n+1;
		else n=n/2;
		cout<<n<<" ";
	}
	return 0;
}