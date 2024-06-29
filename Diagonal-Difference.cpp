#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];

    int left_bottom = 0, right_bottom = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                left_bottom += arr[i][j];
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j == n-1){
                right_bottom += arr[i][j];
            }
        }
    }

    cout << abs(left_bottom - right_bottom) << '\n';

    return 0;
}