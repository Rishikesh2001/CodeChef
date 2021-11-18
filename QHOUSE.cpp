#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define mod 1000000007
using namespace std;
typedef long long int lli;

void c_p_c()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int32_t main()
{
    c_p_c();

    int start = 0, end = 1000;
    int a = 0;
    while (start <= end)
    {
        int mid = (end + start) / 2;
        cout << "? " << mid << " " << 0 << endl;
        fflush(stdout);
        string res;
        cin >> res;
        if (res == "YES")
        {
            start = mid + 1;
            a = mid;
        }
        else
            end = mid - 1;
    }

    // cout << a << endl;

    int b = 0;
    start = 0, end = 1000;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        cout << "? " << 0 << " " << mid << endl;
        fflush(stdout);
        string res;
        cin >> res;
        if (res == "YES")
        {
            start = mid + 1;
            b = mid;
        }
        else
            end = mid - 1;
    }
    // cout << b << endl;

    int sq = 4 * a * a;

    int c = 0;
    start = 0, end = 1000;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        cout << "? " << mid << " " << 2 * a << endl;
        fflush(stdout);
        string res;
        cin >> res;
        if (res == "YES")
        {
            start = mid + 1;
            c = mid;
        }
        else
            end = mid - 1;
    }

    int tri = (2 * c * (b - 2 * a)) / 2;
    // cout << tri << endl;
    int ar = sq + tri;
    cout << "! " << ar << endl;
    return 0;
}