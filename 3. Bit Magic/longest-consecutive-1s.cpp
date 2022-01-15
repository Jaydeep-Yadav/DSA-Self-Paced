#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//? Given a number N. Find the length of the longest consecutive 1s in its binary representation.

int maxConsecutiveOnes(int x){
    int count = 0;

    while (x!=0){
        // This operation reduces length
        // of every sequence of 1s by one.
        x = (x & (x << 1));

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