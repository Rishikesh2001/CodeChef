#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n; cin>>n; 
   int a[n]; int sum=0;
   
   for(int i=0; i<n; i++){
      cin>>a[i];
      sum+=a[i];
   }
   
   sum*=2;
   
   for(int i=1; i<=sum; i++){
      if(i*(i+1) > sum){
         cout<<i-1<<endl;
         return;
      }
   }
}  

int main() {
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int t; cin>>t; while(t--){
	   solve();
	}
	return 0;
}

/*Input:
2
3
1 2 4
4
1 1 3 4

Output:
3
3
*/
