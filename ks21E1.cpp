#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define nline "\n"


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<": "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

#define rep(i,s,e) for(ll i=s;i<e;i++)
#define repp(i,s,e) for(ll i=s;i<=e;i++)
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll mod = 1e9 + 7;


void fast()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif

    fast_IO
    cout.tie(NULL);
}

vector<string> arr;

void permute(string a, int l, int r)
{
    if (l == r)
        arr.pb(a);
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permute(a, l + 1, r);
            swap(a[l], a[i]);
        }
    }
}


void solve(int cnt)
{
    arr.clear();
    cout << "Case #" << cnt << ": ";
    string s; cin >> s;
    permute(s, 0, s.size() - 1);
    vector<string> res;
    for (int i = 0; i < arr.size(); i++) {
        bool flag = true;
        for (int j = 0; j < s.size(); j++) {
            string temp = arr[i];
            if (temp[j] == s[j]) flag = false;
        }
        if (flag) {
            res.pb(arr[i]);
            break;
        }
    }

    if (res.size() == 0) cout << "IMPOSSIBLE" << nline;
    else cout << res[0] << nline;



}


int main()
{
    fast();

    // test
    int t; cin >> t;
    int cnt = 1;
    while (t--)
    {
        solve(cnt);
        cnt++;
    }



    return 0;
}
