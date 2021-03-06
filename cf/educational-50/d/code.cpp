#include <bits/stdc++.h>
#define MAXN 300010

#define trace1(a) cout << a << '\n';
#define trace2(a, b) cout << a << ' ' << b << '\n';
#define trace3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n';
#define trace4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
#define trace5(a, b, c, d, e) cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << '\n';
#define trace6(a, b, c, d, e, f) cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << ' ' << f << '\n';
#define printArr(harry, tam) loop1(0, tam-1) cout << harry[i] << " \n"[i == tam -1];
#define loop1(l,r) for(int i = 0; i <=r;i++)

#define swap(a, b) auto temp = a; a = b; b = temp;
#define mp makepair
#define pb push_back

using namespace std;

typedef long long ll;
typedef long double ld;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

typedef vector<ll> vll;
typedef vector<double> vd;

int main(){
	int a, b, cnt=1;
	int ar[MAXN];
	int br[MAXN];
	ll sa=0,sb=0;
	scanf("%d",&a);
	for(int i = 0; i < a;i++){
		scanf("%d",ar+i);
		sa+=ar[i];
	}
	scanf("%d",&b);
	for(int i = 0; i < b;i++){
		scanf("%d",br+i);
		sb+=br[i];
	}
	if(sa!=sb){
		trace1(-1);
		return 0;
	}
	sa=sb=0;
	int i=0,j=0;
	// sa += ar[i++];
	// sb += br[j++];
	while(i < a && j < b){
		if(sa < sb)
			sa += ar[i++];
		else
			sb += br[j++];
		if(sa == sb){
			sb = sa = 0;
			cnt++;
		}
	}
	trace1(min(cnt, min(a,b)));

 	return 0;
}
