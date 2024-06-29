#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;

    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    int alice = 0, bob = 0;

    for(int i = 0; i < n; i++){
        
        if(a[i] == b[i]){
            
            continue;
        }

        else if(a[i] > b[i]){

            alice++;
        }

        else{

            bob++;
        }
    }

    cout << alice << ' ' << bob << '\n';

    return 0;
}