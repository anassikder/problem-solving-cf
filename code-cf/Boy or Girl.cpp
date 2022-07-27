#include <bits/stdc++.h>
using namespace std;
void PrintMap(map<char,int>&m)
{
    cout << "[ ";
    for (auto &item : m)
    {
        cout << item.first << ":" << item.second << " ";
    }
    cout << "]\n";
}

void Count(map<char,int>&m)
{
    int c = 0;
    for (auto &item:m)
    {
        c+=item.second;

    }
    if(c%2==0)
    {
        cout<<"CHAT WITH HER!";

    }
    else
    {
        cout<<"IGNORE HIM!";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    string s;
    cin>>s;
    map<char,int>m ;
    for(char c:s)
    {
        m[c]=1;
    }
    Count(m);

    return 0;
}

