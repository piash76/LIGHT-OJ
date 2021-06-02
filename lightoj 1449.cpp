
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
const int M=500005;

ll a[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j,cas=0;
    cin>>t;
    while(t--)
    {
        string s;cin>>s;

        ll idx;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='/') {idx=i+2;break;}
        }
        string ans="https://";

        for(i=idx;i<s.size();i++) ans+=s[i];

       ///printf("Case %lld: ",++cas);
       cout<<"Case "<<++cas<<": ";
       cout<<ans<<endl;


    }

    return 0;

}




