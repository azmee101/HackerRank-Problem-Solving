#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    string tmp = "";
        tmp += str[0];
        tmp += str[1];

    int hrs = stoi(tmp);
    if(hrs == 12 && str[8] == 'A'){
        str[0] = '0';
        str[1] = '0';
    }

    if(str[8] == 'P'){

        if(hrs != 12){
            hrs += 12;
            str[1] = '0' + hrs % 10;
            hrs /= 10;
            str[0] = '0' + hrs;
        }
    }

    for(int i = 0; i < 8; i++){
        cout << str[i];
    }
    
    puts("");
    
    return 0;
}