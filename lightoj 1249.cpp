#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,string>i,pair<int,string>j)
{
    return i.first<j.first;
}

int main()
{

    vector<pair<int,string> >pi;
    int ary[102];
    int test;
    cin>>test;
    for(int cas=1; cas<=test; cas++)
    {
        int n;
        cin>>n;
        int t=n;
        int k=0;
        pi.clear();
        while(t--)
        {
            string ss;
            int a,b,c;
            cin>>ss>>a>>b>>c;
            pi.push_back(make_pair((a*b*c),ss));
        }

        printf("Case %d: ",cas);
        sort(pi.begin(),pi.end(),cmp);




       if(pi[0].first==pi[n-1].first) puts("no thief");
       else  printf("%s took chocolate from %s\n",(pi[n-1].second).c_str(),(pi[0].second).c_str());



    }

    return 0;
}
