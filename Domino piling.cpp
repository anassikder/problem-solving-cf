#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    if (m*n>1)
    {
        cout<< floor((m*n)/2);
    }
    else{
        cout<<0;
    }

    return 0;

}
