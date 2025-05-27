#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
}
