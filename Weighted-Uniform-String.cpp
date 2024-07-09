#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    string str;
    cin >> str;
    vector<ll> v;
    map<int, bool> mp;
    int j;

    // time complexity O(N)
    
    for(int i = 0; i < str.size(); i = j){

        char tmp = str[i];
        ll ans = str[i]-'a' + 1;
        v.push_back(ans);
        mp[ans] = true;
        
        for(j = i+1; j < str.size(); j++){
            
            if(tmp == str[j]){
                
                v.push_back(str[j]-'a'+1);
                mp[v.back()] = true;
                ans += (str[j]-'a'+1);
                v.push_back(ans);
                mp[v.back()] = true;
            }

            else{
                break;
            }
        }
    }

    int n; cin >> n;

    while(n--){
        int x; cin >> x;
        if(mp[x]){
            cout << "Yes" << '\n';
        }
        else{
            cout << "No" << '\n';
        }
    }
    return 0;
}