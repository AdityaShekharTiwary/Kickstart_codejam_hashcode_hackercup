#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define vll vector<ll>
#define dbl double
#define vi vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(ll i=s;i<e;i++)
#define fo(i,s,e) for(ll i=s;i<=e;i++)
#define mi map<int,int>
#define mp make_pair
#define pll pair<ll,ll>
#define mll map<ll,ll>
#define pb push_back
#define ff first
#define ss second
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


void fast()
{
	#ifndef ONLINE_JUDGE
		freopen("input1.txt","r",stdin);
		freopen("output1.txt","w",stdout);
	#endif

	fast_IO	
	cout.tie(NULL);
}

void solve(int &tc)
{
	int n,b; cin>>n>>b;
		int arr[100000];
		for(int i=1;i<=n;i++) cin>>arr[i];
		sort(arr+1,arr+n+1);
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(b>=arr[i]){
				cnt++;
				b-=arr[i];
			}
		}
		cout<<"Case #"<<tc<<": "<<cnt<<endl;
		tc++;
}

int main()
{
	fast();

	int tc=1;
	test
	{
		solve(tc);
	}

	return 0;
}