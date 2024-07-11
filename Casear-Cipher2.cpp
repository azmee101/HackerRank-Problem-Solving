#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int k;
    cin >> k;

    for(int i = 0; i < n; i++){
        
        if(isalpha(str[i])){

            char base = islower(str[i]) ? 'a' : 'A';

            str[i] = base + (str[i] - base + k) % 26;
        }
    }

    cout << str << '\n';
    return 0;
}