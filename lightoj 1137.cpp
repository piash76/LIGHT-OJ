

#include<bits/stdc++.h>
#define ll long long
#define pll  pair<ll,ll>
#define PI                      acos(-1.0)

using namespace std;

const ll inf=1e18;
const int N=500005;



double chek(double H,double L)
{

    double r=(H/2.0) + (L*L)/(8*H);

   /// cout<<"R "<<r<<endl;

    double d=(2.00*r);
   ///cout<<"D "<<d<<endl;

    double theta=asin(L/d);  ///in radian

    ///cout<<"THETA 1 "<<theta<<endl;

    theta=theta*2.0;

    ///cout<<"THETA 2 "<<theta<<endl;


    double s=r*theta;

   /// printf("S %.10f\n",s);

   return s;
}

int main()
{

    ll i,j,cas=0;

    ///double tr=chek(61.3289915,1000);


    ll t;scanf("%lld",&t);
    while(t--)
    {
        double L,N,C;scanf("%lf %lf %lf",&L,&N,&C);

        ///cout<<" L "<<L<<" N "<<N<<" C "<<C<<endl;

        double new_L=(1 + (N*C) )* L;

       /// printf("NEW L %.6f\n",new_L);


        double lo=0,hi=90,mid,ans;
        ///highest of H can be 86

        for(i=1;i<=100;i++)
        {
            ///s=r*theta where s=new_l
            ///here we are searching for r as s proportional to r
            ///and r is proportional to H where H is reckoning by binary search
             mid=(lo+hi)/2.0;

             double s=chek(mid,L);

            /// printf("POSSIBLE ANS %.6f\n",s);

            if(s<new_L)
            {
                lo=mid;
            }
            else
            {
                hi=mid;
            }
        }


        ///printf("ANS %.10f\n",lo);

        printf("Case %lld: %.10f\n",++cas,lo);


    }

    return 0;

}




