//https://codeforces.com/group/ibNhxWfOek/contest/341358/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;

    while(t--)
    {
        int n; cin>>n;
        int r[n][5];
        int player = 1;
        if(n == 1){
            cout<<1<<'\n';
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<5; j++)
                {
                    cin>>r[i][j];
                }
            }
            for(int i=0; i<n; i++)
            {
                for(int k=i+1; k<n; k++)
                {
                    for(int j=0; j<5; j++)
                    {
                        //obtener el mejor ranking
                        if(r[i][j] < r[k][j]){
                            player = i;
                            cout<<r[i][j]<<" "<<r[k][j]<<" "<<player<<endl;
                        }
                    }
                }
            }
        }

    }

}