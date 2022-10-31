#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin>>n;
        ll d[n];
        for(ll i=0;i<n;i++){
            cin>>d[i];
        }
        ll a[n];
        a[0]=d[0];
        for(ll i=1;i<n;i++){
            a[i]=a[i-1]+d[i];
        }
        ll ct=0;
        for(ll i=0;i<n-1;i++){
            if((a[i]-d[i+1]>=0 && a[i]-d[i+1]!=a[i+1])){
                ct++;
                break;
            }
        }
        if(ct!=0){
            cout<<-1<<endl;
        }
        else{
            for(ll i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
}