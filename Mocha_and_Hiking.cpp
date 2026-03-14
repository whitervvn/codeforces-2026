//https://codeforces.com/group/ibNhxWfOek/contest/341358/problem/A
//camino hamiltionano

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> a(n+1);
        for(int i = 1; i<=n; i++) //indexado en 1 
        {
            cin>>a[i];
        }

        //caso a[i] = 1
        if(a[1] == 1)
        {
            cout<<n+1<<" ";
            for(int i=1; i<=n; i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            continue;
        }

        //caso secuencial
        if(a[n] == 0)
        {
            for(int i = 1; i<=n; i++)
            {
                cout<<i<<" ";
            }
            cout<<n+1<<endl;
            continue;
        }

        //caso a[i] = 0
        int pos = -1; //un centinela
        for(int i = 1; i<n; i++)
        {
            if(a[i] == 0 && a[i+1] == 1)
            {
                //imprimir la i
                pos = i;
                break;
            }
        }

        //ver si existe o no la respuesta
        if(pos != -1)
        {
            for(int i = 1; i <=pos; i++)
            {
                cout<<i<<" ";
            }
            //hacer i...n+1...i+1
            cout<<n+1<<" ";
            for(int i = pos+1; i<=n; i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}