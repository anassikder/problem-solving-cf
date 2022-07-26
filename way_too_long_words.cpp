#include <bits/stdc++.h>
using namespace std;

void solution()
{
    string s;
    cin>>s;
    if(s.length()>10)
    {

        cout<<s[0]+to_string(s.length()-2)+s[s.length()-1]<<endl;

    }
    else
    {
        cout<<s<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        solution();
    }

    return 0;
}
