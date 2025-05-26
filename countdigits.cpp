#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

int numberofdigits(int n){
    if(n == 0){
        return 1;
    }
    int count = 0;
    while(n > 0){
        n/=10;
        count++;
    }
    return count;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    cout << numberofdigits(n) << endl;
}
