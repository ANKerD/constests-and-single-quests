#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define ld long double
#define vii vector<ii>
#define vll vector<ll>
#define maxn -879879

template<typename T>
void trace(T a){ cout << a << '\n';}
template<typename T, typename... Args>
void trace(T a, Args ...args){ cout << a << ' '; trace(args...);}

int main(){
	int n;
	cin >> n;
	int a[n];
	int ans = 0;
	for(int i = 0; i < n;i++){
		cin >> a[i];
		if(i){
			int x = a[i]+a[i-1];
			if(x == 5){
				cout << "Infinite\n";
				return 0;
			} 
			ans += x;
		}
	}
	cout << "Finite\n";
	cout << ans << '\n';
 	return 0;
}

