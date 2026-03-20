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
        int player;
   
        for(int i=0; i<n; i++){
            for(int j=0; j<5; j++){
                cin>>r[i][j];
            }
        }

        if(n == 1){
            cout<<1<<'\n'; continue; 
        } 
        
        int w[n] = {0};
        
        for(int i=0; i<n; i++){
            for(int k=i+1; k<n; k++){
                int cont_i = 0;
                int cont_k = 0;
                for(int j=0; j<5; j++){
                    if(r[i][j] < r[k][j]){
                        cont_i++;
                    }
                    else{
                        cont_k++;
                    }
                    
                }
                if(cont_i > cont_k){
                    w[i]++;
                }
                else if(cont_k > cont_i){
                    w[k]++;
                }
                
            }
        }
        int ganador = -1;
        for(int i=0; i<n; i++)
        {
            if (w[i] == n - 1) {
                ganador = i + 1; break;
            }
        }
        cout<<ganador<<'\n';
    }
}