#include <map>
#define MAXN 200200
#define INF 1000000000000000005
#define mod 998244353
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define ll long long
#define debug(x)        \
    cout << #x << ": "; \
    _print(x);          \
    cout << endl;

using namespace std;

int dx[] = {0, 1, 0, -1}; // left, up, right, down
int dy[] = {-1, 0, 1, 0};

/*
    ( (x+dx[j]) >=0) && ( (x+dx[j])<h ) &&( (y+dy[j])>=0 )&&( (y+dy[j])<w) )
    compression
    w*i+j
    i:h, j:w
    x=z/w,y=z%w;
*/


int dxx[] = {-1, -1, 1, 1}; // up left, down left, down right,  up right
int dyy[] = {-1, 1, 1, -1};

template <class T>
void _print(vector<int> v1)
{
    for (int i : v1)
        cout << i << " ";
}
void _print(long long a) { cout << a; }
void _print(char a) { cout << a; }
void _print(string a) { cout << a; }
void _print(bool a) { cout << a; }

typedef pair<int, int> pair_ii;

void solve(){
	
}

int main (){
	// freopen("inp.txt", "r", stdin);
	int t;
	cin >> t;
	while (t--) {
         cout << endl; 
	}
	solve();
	return 0;
} 
