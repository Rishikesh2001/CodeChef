/*In Chefland, there is a very famous street where N types of street food (numbered 1 through N) are offered. For each valid i, there are Si stores that offer food of the i-th type, the price of one piece of food of this type is Vi (the same in each of these stores) and each day, Pi people come to buy it; each of these people wants to buy one piece of food of the i-th type.

Chef is planning to open a new store at this street, where he would offer food of one of these N types. Chef assumes that the people who want to buy the type of food he'd offer will split equally among all stores that offer it, and if this is impossible, i.e. the number of these people p is not divisible by the number of these stores s, then only ⌊p\s⌋ people will buy food from Chef.

Chef wants to maximise his daily profit. Help Chef choose which type of food to offer and find the maximum daily profit he can make.*/
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

int n;
int a[1001][3];

void solve(){
   cin >> n;
   for(int i=0; i<n; i++){
      for(int j=0; j<3; j++){
         cin >> a[i][j];
      }
   }

   int ans = 0;
   for(int i=0; i<n; i++){
      if(a[i][0] >= a[i][1]) continue;

      ans = max(ans, (a[i][1]/(a[i][0]+1))*a[i][2]);
   }

   cout << ans << "\n";
}

signed main(){
   ios :: sync_with_stdio(false);
   cin.tie(0); cout.tie(0);

   int test;cin >> test;while(test--)
   solve();
}