#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){


    /* 
       by reading the problem description
       it may not be a sub set (it may) but
       it can be contigious sub set. we can
       choose a number or not. not necessary
       that we have to choose all the number
       between a segmennt
    */

    int n, k; cin >> n >> k;
    int a[n];
    map<int, int> mp;

    for(int i = 0; i < n; i++){

        cin >> a[i];
        a[i] = a[i] % k;
        mp[a[i]]++;
    }
    
    int ans = 0;
    
    for(int i = 1; i < k; i++){
        
        if(mp[i] != 0){

            if(k % i == 0 && mp[i] >= (k/i)){
                
                if(k/i == 2){
                    
                    mp[i] = k/i - 1;
                }
            }

            ans += max(mp[i], mp[k-i]);
            mp[i] = mp[k-i] = 0;
            
        }
    }

    (mp[0]) ? ans+=1 : ans;
    
    cout << ans << '\n';

    return;
}

int32_t main()
{
    NEED_FOR_SPEED;
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}