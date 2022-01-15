#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//?Given N in Gray Code, find its binary equivalent. Return the decimal representation of the binary equivalent.

// Input: N = 4
// Output: 7
// Explanation:
// Given 4 representing gray code 110.
// Binary equivalent of gray code 110 is 100.
// Return 7 representing gray code 100

int grayToBinary(int n){
    int ans= 0;
    while(n){
        ans = ans ^ n;
        n = n>>1;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif
    
    return 0;
}