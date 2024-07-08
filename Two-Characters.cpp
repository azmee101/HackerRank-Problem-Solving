#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    int mx = 0;

    for(int i = 'a'; i <= 'z'; i++){

        for(int j = 'a'; j <= 'z'; j++){

            if(i == j){
                continue;
            }

            string cur;

            for(char x : str){
                if(x == i || x == j){
                    cur += x;
                }
            }

            bool flag = false;

            for(int k = 1; k < cur.size(); k++){
                if(cur[k] == cur[k-1]){
                    flag = true;
                    break;
                }
            }
            int tmp = cur.size();
            if(!flag){
                mx = max(mx, tmp);
            }
        }
    }
    if(mx == 1) mx = 0;
    cout << mx << '\n';
}