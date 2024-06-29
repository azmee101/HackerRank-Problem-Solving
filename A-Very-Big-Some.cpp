#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int n;
    cin >> n;

    ll sum = 0;

    ll arr[n];
    for(int i = 0; i < n; i++){
        
        cin >> arr[i];

        sum += arr[i];
    }

    cout << sum << '\n';
    
    return 0;
}