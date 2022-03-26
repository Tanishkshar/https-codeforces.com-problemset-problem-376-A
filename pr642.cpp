#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int ith = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '^')
        {
            ith = i;
        }
    }
    long long sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '1' && s[i] <= '9')
        {
            sum += (s[i] - '0') * (i - ith);
        }
    }

    if (sum < 0)
        cout << "left\n";
    else if (sum == 0)
        cout << "balance\n";
    else
        cout << "right\n";

    return 0;
}