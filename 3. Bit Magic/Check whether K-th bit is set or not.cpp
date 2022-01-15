#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//? Given a number N and a bit number K, check if Kth bit of N is set or not. A bit is called set if it is 1. Position of set bit '1' should be indexed starting with 0 from LSB side in binary representation of the number.
// Input: N = 4, K = 0
// Output: No

bool checkKthBit(int n, int k){  
    return ((n>>k)&1);
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