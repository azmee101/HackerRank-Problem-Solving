#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    while(true){
        bool chk = false;
        for(int i = 0; i < str.size()-1; i++){
            if(str[i] == str[i+1] && str.size() > 2){
                str.erase(str.begin()+i, str.begin()+i+2);
                chk = true;
            }

            else if(str[i] == str[i+1] && str.size() == 2){
                str = "";
                break;
            }
        }

        if(!chk) break;
    }
    if(str.size() == 0){
        cout << "Empty String\n";
    }
    else{
        cout << str << '\n';
    }
    return 0;
}