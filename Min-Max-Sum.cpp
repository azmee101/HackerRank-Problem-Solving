#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll min_sum = 0, max_sum = 0;
    int arr[5];
    
    for(int i = 0; i < 5; i++){
        
        cin >> arr[i];
    }

    sort(arr, arr+5);

    for(int i = 0; i < 5; i++){

        if(!i){
            min_sum += arr[i];
            continue;
        }
        else if(i == 4){
            max_sum += arr[i];
            continue;
        }

        min_sum += arr[i];
        max_sum += arr[i];
    }

    cout << min_sum << ' ' << max_sum << '\n';

    return 0;
}