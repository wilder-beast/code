#include<bits/stdc++.h>
using namespace std;
#define  pb    push_back
#define  mp    make_pair
#define  fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define  FOR(i,j,k,in)  for(int i=j;i<=k;i+=in)
#define  RFOR(i,j,k,dc) for(int i=j;i>=k;i-=dc)
#define  ff  first
#define  ss  second
#define  T   int t;cin>>t;while(t--)
#define  mem(a,b)  memset(a,(b),sizeof(a))
#define  all(c)   c.begin(),c.end()
#define  rall(c)  c.rbegin(),c.rend()
#define  FORIT(it,m)  for(it=m.begin();it!=m.end();it++)
#define  mod  1000000007
#define  maxin  INT_MAX
#define  minin  INT_MIN
#define  sz(cnt) (int)cnt.size()
#define  in(c,x)     c.find(x)!=c.end()
#define  bits  __builtin_popcount
#define  gcd   __gcd
typedef  long long int ll;
typedef  vector<ll>vi;
typedef  vector<string>vs;
typedef  map<ll,ll>mpii;
typedef  map<char,ll>mpci;
typedef  set<ll>sti;
typedef  multiset<ll>msti;
typedef  multimap<ll,ll>mmpii;
typedef  pair<ll,ll>pii;
ll power(ll a,ll b,ll m){
	ll res = 1;
	while(b>0){
		if(b%2==1){
		res = (res%m * a%m)%m;
		}
 
		a = (a%m * a%m)%m;
		b/=2;	
	}
	return res;
}
//********************THE END OF TEMPLATES*******************//
int main(){
	fast;
		ll n;
		cin>>n;

		ll a1,a2,a3,b1,b2,b3;
		cin>>a1>>a2>>a3>>b1>>b2>>b3;

		ll x=0,y=0;


		ll z=0;
		
		x = max(z,a1-b1-b3) + max(z,a2-b1-b2) + max(z,a3-b2-b3);
		y = min(a1,b2) + min(a2,b3) + min(a3,b1);

		cout<<x<<" "<<y<<endl;
		
	
		
	return 0;
}
