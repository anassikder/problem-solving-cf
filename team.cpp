#include <bits/stdc++.h>
using namespace std;

int solution(){
    int x , y ,z;
    cin>>x>>y>>z;
    if (x+y+z>=2)
    {

        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    int test_cases;
    int solve = 0;
    cin >> test_cases;
    while(test_cases--){
        int ret = solution();
        solve+=ret;
    }
    cout<<solve<<endl;

    return 0;
}
