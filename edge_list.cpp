#include <bits/stdc++.h>

using namespace std;
#define f(n) for (int i = 0; i < n; i++)
#define f1(n) for (int i = 1; i < n; i++)
#define fj(n) for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long

 int main()

{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>>p;
    f(n)
    {
        int a,b;
        cin>>a>>b;
        p.push_back({a,b});

    }
    for(auto x:p)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}