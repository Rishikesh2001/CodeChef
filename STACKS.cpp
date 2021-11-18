#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
using namespace std;
typedef long long int lli;

lli mod = 1000000007;
int a[100001];

signed main()
{
   ios :: sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
   
	int test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		
		for(int i = 0; i < n; i++)
			cin >> a[i];
			
		vector<int> v;
		v.pb(a[0]);	
		
		for(int i = 1; i< n ; i++){
			auto it = upper_bound(v.begin(), v.end(), a[i]);
			
			if(it == v.end())
				v.pb(a[i]);
			
			else
				v[it - v.begin()] = a[i];
		}
		
		cout << v.size() << " ";
		for(auto i: v)
			cout << i << " ";
		cout << "\n";	
		
	}
	
}