
#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int even;
    int n,T;
    cin >> T;
    for(int i = 1; i <= T; i++){
        cin >> n;
        even = 0;
        while(n != 0){
           if(n%2 == 1)even++;
           n/=2;
        }
        if(even % 2 == 0)cout << "Case " << i << ": even" << endl;
        else cout << "Case " << i << ": odd" << endl;
    }
    return 0;
}
