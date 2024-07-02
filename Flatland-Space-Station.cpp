#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;

    vector<int> v(c);
    map<int, int> mp;

    for(int i = 0; i < c; i++){
        
        cin >> v[i];
        
        mp[v[i]]++;
    }

    sort(v.begin(), v.begin()+c);
    
    int mx = 0;
    for(int i = 0; i < n; i++){

        if(mp[i]) continue;

        auto it = lower_bound(v.begin(), v.end(), i); // always big

        int tmp, indx;

        if(it != v.end()){
            indx = distance(v.begin(), it);

            tmp = v[indx];
            if(indx > 0) indx--;
            tmp = min(tmp, v[indx]);
        }
        else{
            tmp = v[0];
        }

        auto jt = upper_bound(v.begin(), v.end(), i);
        int tmp2;
        
        if(jt != v.end()){
            indx = distance(v.begin(), jt);
            tmp2 = v[indx];
        }
        else{
            tmp2 = v[c-1];
        }
        mx = max(mx, min(abs(i-tmp), abs(i-tmp2)));
    }

    cout << mx << '\n';
}