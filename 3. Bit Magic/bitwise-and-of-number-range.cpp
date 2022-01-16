#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//? Given two integers left and right that represent the range [left, right], return the bitwise AND of all numbers in this range, inclusive.

// Example 1:

// Input: left = 5, right = 7
// Output: 4

int rangeBitwiseAnd(int m, int n) {
    int count=0;
    while(m!=n){
        m=m>>1;
        n=n>>1;
        count++;
    }
    return m<<=count;   
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