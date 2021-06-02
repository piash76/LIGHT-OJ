
///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int mod2=2147483647; ///2^31-1
const int M=200005;

ll a[M],vis[M];


int main()
{




    ll t,i,j,cas=0;
    cin>>t;
    while(t--)
    {
        memset(vis,0,sizeof(vis));

        ll n;cin>>n;
        for(i=0;i<n;i++) cin>>a[i];

        ll sum=0;

        for(i=n-1;i>=0;i--)
        {
           if(vis[abs(a[i])]==0) { sum+=a[i];vis[abs(a[i])]=1; }
        }

        cout<<"Case "<<++cas<<": ";
       cout<<sum<<endl;


    }

    return 0;

}




