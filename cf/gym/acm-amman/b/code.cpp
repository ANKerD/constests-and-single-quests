#include <bits/stdc++.h>

#define MAXN 100010

#define trace1(a) cout << a << '\n';
#define trace2(a, b) cout << a << ' ' << b << '\n';
#define trace3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n';
#define trace4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
#define trace5(a, b, c, d, e) cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << '\n';
#define trace6(a, b, c, d, e, f) cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << ' ' << f << '\n';
#define printArr(harry, tam) loop1(0, tam-1) cout << harry[i] << " \n"[i == tam -1]);

#define swap(a, b) auto temp = a; a = b; b = temp;

#define loop1(l, r) for(int i = l; i <= r; i++)
#define loop2(l, r) for(int j = l; j <= r; j++)
#define loop3(l, r) for(int k = l; k <= r; k++)
#define iloop1(l, r) for(int i = l; i >= r; i--)
#define iloop2(l, r) for(int j = l; j >= r; j--)
#define iloop3(l, r) for(int k = l; k >= r; k--)
#define range(sz) loop1(0, sz-1)

#define read(l, r, a) for(int i = l; i <= r; i++) scanf("%d", &a[i])

#define mp(a, b) make_pair(a, b);

using namespace std;

typedef long long ll;
typedef long double ld;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

typedef vector<ll> vll;
typedef vector<double> vd;

int main(){
	int n;
	cin >> n;
	char c, l[MAXN];
	string a,b;
	int aa[26], bb[26];
	while(n--){
		memset(aa, 0, sizeof aa);
		memset(bb, 0, sizeof bb);
		scanf(" %s", l);
		a = l;
		scanf(" %s", l);
		b = l;
		// range(a.size()){
		// 	aa[a[i]-'a']++;
		// }
		range(b.size()){
			bb[b[i]-'a']++;
		}
		int cnt=0;
		range(a.size()){
			if(bb[a[i]-'a']--) cnt++;
			else break;
		}
		printf("%d\n", cnt);
	}

 return 0;
}
