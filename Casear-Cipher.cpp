#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int rotation;
    cin >> rotation;

    rotation = rotation % 26;

    if(rotation == 0) {
     
        rotation = 26;
    }

    for(int i = 0; i < n; i++){
        
        for(int j = 1; j <= rotation; j++){
            
            if(str[i] == 'z'){
                str[i] = 'a';
            }
            else if(str[i] == 'Z'){
                str[i] = 'A';
            }
            else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
                str[i]++;
            }
        }
    }

    cout << str << '\n';
    return 0;

}