#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//? Given a non-negative number N and two values L and R. The problem is to set all the bits in the range L to R in the binary representation of N.

// Input :
// N = 17, L = 2, R = 3 
// Output :
// 23

int setAllRangeBits(int N , int L , int R) {
    int mask = 1;
    mask = mask<<(R- L + 1);
    mask = mask - 1;
    mask = mask<<(L-1);
    N= N | mask;
    return N;
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