#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int divide(int dividend, int divisor) {   
    if (dividend == INT_MIN and divisor == -1)
        return INT_MAX;

    long long num = abs(dividend), denm = abs(divisor), ans = 0;
    int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
    while (num >= denm)
    {
        long long temp = denm, m = 1;
        while (temp << 1 <= num)
        {
            temp <<= 1;
            m <<= 1;
        }

        num -= temp;
        ans += m;
    }
    return sign * ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif
    
    int dividend = -2147483647, divisor= -1;
    cout<<divide(dividend, divisor);
    return 0;
}