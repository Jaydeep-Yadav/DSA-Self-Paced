#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int numberOfDigit_Iterative(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

int numberOfDigit_Recursive(int n)
{
    if (n == 0)
        return 0;
    return 1 + numberOfDigit_Recursive(n / 10);
}

int numberOfDigit_Logarithmic(int n)
{
    return floor(log10(n)+1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    cout << numberOfDigit_Iterative(n);
    return 0;
}