//https://codeforces.com/group/ibNhxWfOek/contest/341358/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;

    while(t--)
    {
        int n; cin>>n;

        for(int i = 0; i < n; i++)
        {
            int R[n][5]; //r[i][j], n°atleta y n°maraton
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < 5; j++)
                {
                    cin>>R[i][j];
                }
            }
        }
    }

}