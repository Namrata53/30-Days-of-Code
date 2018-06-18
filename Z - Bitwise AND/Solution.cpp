#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long N,K;
        cin>>N>>K;
        long long max=LLONG_MIN;
        for(int i=1;i<=N;++i)
        {
            for(int j=i+1;j<=N;++j)
            {
                if(((i&(j))>max) && ((i&(j)) <K))
                    max=j&(i);
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
