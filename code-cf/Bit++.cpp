#include <bits/stdc++.h>
using namespace std;

int solution()
{
    string s;
    cin>>s;
    int x=0;
    if (s == "++X" || s == "X++")
    {
        x+=1;
    }
    else
    {
        x-=1;
    }
    return x;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    int test_cases,res=0;
    cin >> test_cases;
    while(test_cases--)
    {
        int x = solution();
        res+=x;

    }
    cout<<res;

    return 0;
}

