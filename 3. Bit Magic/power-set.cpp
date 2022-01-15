#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void powerSet(string str){
    int n=str.length();
    int powSize = pow(2,n);

    for(int counter=0; counter<powSize; counter++){
        for(int j=0;j<n;j++){
            if((counter & (1<<j))!=0) cout<<str[j];
        }
        cout<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif
    string str="abc";
    powerSet(str);
    return 0;
}