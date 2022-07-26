#include <bits/stdc++.h>
using namespace std;

char to_upper(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 32;
    }

    return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(i==0)
        {
            char a = to_upper(s[i]);
            cout<<a;

        }
        else
        {
            cout<<s[i];
        }

    }
    return 0;
}

