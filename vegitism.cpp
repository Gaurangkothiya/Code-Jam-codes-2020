/*
   AUTHOR :- Gaurang_Kothiya
   
   Quote:-" Great things never come from comfort zones."                                                                                                                
*/
 
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>  
#include <ext/pb_ds/tree_policy.hpp> 
#include <functional>
#include <bitset>
#include <cstdint>
#include <initializer_list>
 
using namespace std;
using namespace __gnu_pbds;  
 
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> data_set; 
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long  
#define ld long double
#define f(i,x,n) for(ll i=x;i<=n;i++)
#define fe(x,v)   for(auto &x :v)
#define nf(i,x,n) for(ll i=n;i>=x;i--)
#define all(a)   a.begin(),a.end()
#define b_s(a,b)   binary_search( all(a),b)
#define lb(v,n)  lower_bound(all(v) ,n )
#define ub(v,n)  upper_bound( all(v) , n)
#define gcd(a,b) __gcd(a,b)
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define B begin()
#define E end()
#define acc(v, x) accumulate(all(v), x)
#define p(a,b) pair<a,b>
#define F first
#define S second
#define sz size()
#define v(x) vector<x>
#define m(a,b) map<a,b>
#define u_m(a,b) unordered_map<a,b>
#define mm(a,b) multimap<a,b>
#define s(a) set<a>
#define us(a) unordered_set<a>
#define ms(a) multiset<a>
#define maxy __LONG_LONG_MAX__
#define miny INT_MIN
#define PI 3.14159265358979323846
#define MOD 998244353;

ll st=1;

void Solve()
{
	ll n,r=0,c=0;
	cin>>n;
	
	ll a[n][n];
	f(i,0,n-1)
	{
		f(j,0,n-1) cin>>a[i][j];
	}
	
	f(i,0,n-1)
	{
		s(ll) s1;
		
		f(j,0,n-1) s1.insert(a[i][j]);
		if(s1.sz!=n)r++;
	}
	
	f(j,0,n-1)
	{
		s(ll) s1;
		f(i,0,n-1) s1.insert(a[i][j]);
		if(s1.sz!=n)c++;
	}
	ll sum=0;
	f(i,0,n-1) sum+=a[i][i];
	
	cout<<"Case #"<<st<<": "<<sum<<" "<<r<<" "<<c<<endl;
	st++;	
}

signed main() 
{
	speed	
		
	ll q=1;	
	cin>>q;	
	
	while(q--)	
	Solve();	
	
	//cout << "\n\n"<<"Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " seconds.\n";
	return 0;
}
