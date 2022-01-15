#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//?You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.

// Input: A = 10, B = 20
// Output: 4
// Explanation:
// A  = 01010
// B  = 10100
// As we can see, the bits of A that need 
// to be flipped are 01010. If we flip 
// these bits, we get 10100, which is B.

int countBitsFlip(int a, int b){    
    int x = a^b;
    int count=0;
    while(x>0){
        x=x&(x-1);
        count++;
    }
    return count;
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