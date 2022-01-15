#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//? Given an integer an N. The task is to return the position of first set bit found from the right side in the binary representation of the number.
// Input: N = 18
// Output: 2
// Explanation: Binary representation of 
// 18 is 010010,the first set bit from the 
// right side is at position 2.

unsigned int getFirstSetBit(int n){     
    if(n==0) return -1;
    int pos=1;
    while((n&1)!=1){
        n=n>>1;
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
    
    return 0;
}