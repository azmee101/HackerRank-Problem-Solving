#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    int pos = 0, neg = 0, zero = 0;

    for(int i = 0; i < n; i++){
        
        cin >> arr[i];

        if(arr[i] == 0){
            
            zero++;
        }

        else if(arr[i] < 0){
            
            neg++;
        }

        else{

            pos++;
        }
    }

    cout << setprecision(6) << fixed << pos/(n*1.00) << '\n' << neg/(n*1.00) << '\n' << zero/(n*1.00) << '\n';
}