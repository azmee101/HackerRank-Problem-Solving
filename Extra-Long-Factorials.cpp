#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    v.push_back(1);

    int carry = 0;

    for(int i = 2; i <= n; i++){
        
        for(int j = 0; j < v.size(); j++){
            
            int cur = (v[j] * i) + carry;
            int rem = cur % 10;

            v[j] = rem;
            carry = cur / 10;
        }

        while(carry){

            int rem = carry % 10;
            v.push_back(rem);
            carry /= 10;
        }
    }

    for(int i = v.size()-1; i >= 0; i--){
        cout << v[i];
    }
    puts("");

    return 0;
}