#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);
    int ar[5][5];
    int x,y;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {

            int n;
            cin>>n;
            if (n==0)
            {
                ar[i][j]=n;
            }
            else
            {

                ar[i][j]=n;
                x=i;
                y=j;
            }
        }
    }
    cout<<abs(2-x)+abs(2-y);

    return 0;
}

