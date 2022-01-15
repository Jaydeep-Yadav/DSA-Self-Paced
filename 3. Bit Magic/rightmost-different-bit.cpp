#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//? Given two numbers M and N. The task is to find the position of the rightmost different bit in the binary representation of numbers.

// Input: M = 11, N = 9
// Output: 2
// Explanation: Binary representation of the given 
// numbers are: 1011 and 1001, 
// 2nd bit from right is different.
int posOfRightMostDiffBit(int m, int n){
    if(m==n) return -1;
    int XOR= m^n,pos=1;
    while((XOR&1)!=1){
        XOR=XOR>>1;
        pos++;
    }
    return pos;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif
    
    int m=52,n=4;
    cout<<posOfRightMostDiffBit(m,n);
    return 0;
}