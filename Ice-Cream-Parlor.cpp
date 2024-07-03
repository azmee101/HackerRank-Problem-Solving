#include <bits/stdc++.h>
using namespace std;


void solve(){

    int money, flavour;
    cin >> money >> flavour;
    int arr[flavour];
    
    map<int, int> mp, mp2;

    for(int i = 0; i < flavour; i++){
        cin >> arr[i];
        if(mp[arr[i]]){

            mp2[arr[i]] = i+1;
            continue;
        }
        mp[arr[i]] = i+1;  
    }

    pair<int, int> ans;

    for(int i = 0; i < flavour; i++){
        
        int cur = arr[i];
        int rem = money - cur;

        if(cur == rem && mp[cur] && mp2[cur]){

            ans.first = mp[arr[i]];
            ans.second = mp2[arr[i]];
            break;
        }

        
        if(cur != rem && mp[rem] && mp[cur]){
            ans.first = mp[cur];
            ans.second = mp[rem];
            break;
        }
    }

    cout << ans.first << ' ' << ans.second << '\n';
    return;
}


int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}