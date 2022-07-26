#include <bits/stdc++.h>
using namespace std;

char to_lowercase(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + 32;
    }

    return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    string s1,s2;
    cin>>s1>>s2;
    for(int i=0; i<s1.length(); i++)
    {
        char a = to_lowercase(s1[i]);
        char b = to_lowercase(s2[i]);

        if (int(a) > int(b))
        {
            cout<<1;
            return 0;
        }
        else if(int(a) < int(b))
        {
            cout<<-1;
            return 0;
        }
    }


    cout<<0;
    return 0;
}

