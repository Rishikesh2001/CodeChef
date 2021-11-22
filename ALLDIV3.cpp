#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sortall(x) sort(all(x))
#define memset(x, value) memset(x, value, sizeof(x))
#define mod 1000000007
typedef long long int ll;
typedef long double ld;
using namespace std;

void solve(){
   int n;
   cin >> n;
   int a[n];
   int ones = 0, twos = 0;
   for(int i=0; i<n; i++){
      cin >> a[i];
      if(a[i]%3 == 1) ones++;
      if(a[i]%3 == 2) twos++;
   }

   if(abs(ones-twos) % 3 == 0){
      cout << min(ones, twos) + 2*(abs(ones-twos)/3)<< "\n";
   } else{
      cout << "-1\n";
   }
}

signed main(){
   ios :: sync_with_stdio(false);
   cin.tie(0); cout.tie(0);

   int test;cin >> test;while(test--)
   solve();
}