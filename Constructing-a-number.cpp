#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){

    int n;
    cin >> n;

    int arr[n];

    int x, sum = 0;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){

        while(arr[i]){

            sum += arr[i] % 10;
            arr[i] /= 10;
        }
    }
    
    if(sum % 3 == 0){
        cout << "Yes" << '\n';
    }
    else{
        cout << "No" << '\n';
    }
    
    return;
}

int32_t main()
{
    NEED_FOR_SPEED;
    
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}