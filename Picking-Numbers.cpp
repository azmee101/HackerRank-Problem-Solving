#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    
    int mx = INT_MIN;
    for(int i = 0; i < n; i++){

        int minus_cnt = 0, plus_cnt = 0, zero_cnt = 0;
        
        for(int j = 0; j < n; j++){
            
            if(arr[i] - arr[j] == 1){
                
                plus_cnt++;
            }

            else if(arr[i] - arr[j] == -1){

                minus_cnt++;
            }

            else if(arr[i] == arr[j]){

                zero_cnt++;
            }
        }
        
        mx = max(mx, max(plus_cnt + zero_cnt, minus_cnt + zero_cnt));
        
    }
    
    cout << mx << '\n';
    
    return 0;
}