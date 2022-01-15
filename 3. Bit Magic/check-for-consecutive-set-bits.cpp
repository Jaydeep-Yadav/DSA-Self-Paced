#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//? Given a number N. The task is to check whether it is sparse or not. A number is said to be a sparse number if no two or more consecutive bits are set in the binary representation.

// Input: N = 2
// Output: 1
// Explanation: Binary Representation of 2 is 10, 
// which is not having consecutive set bits. 
// So, it is sparse number

bool isSparse(int n){
    return (n & (n>>1))==0;
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