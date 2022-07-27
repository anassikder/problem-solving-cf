
#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int x;
    cin >> x;
    if (x%2==0 && x>2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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

