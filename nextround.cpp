#include <bits/stdc++.h>
using namespace std;

int solution(int *ar,int n,int k)
{
    int container = ar[k-1];
    int c= 0;
    for(int i = 0; i<n; i++)
    {
        if (ar[i]>=container && ar[i]>0)
        {
            c+=1;

        }
    }
    return c;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    int n,k;
    cin >> n>>k;
    int ar[n];


    for (int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        ar[i]=x;

    }

    cout<<solution(ar,n,k);



    return 0;
}
