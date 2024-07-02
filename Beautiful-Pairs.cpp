#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n], b[n];
    map<int, int> mp;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
        mp[b[i]]++;
    }

    int cur = 0;

    for(int i = 0; i < n; i++){

        if(mp[a[i]] != 0){
            
            cur++;
            mp[a[i]]--;
        }
    }

    if(cur == n) cout << cur-1 << '\n';
    else cout << cur+1 << '\n';

    return 0;
}