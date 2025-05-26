#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;


bool isPali(int n){
    int temp = n;
    int reverse = 0;
    while(temp > 0){
        reverse = reverse*10 + temp%10;
        temp/= 10; 
    }
    return (reverse == n);
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    if(isPali(n)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
