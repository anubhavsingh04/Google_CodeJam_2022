
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t,k=1;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            if(cnt+1<=v[i])
            cnt++;
        }
        cout<<"Case #"<<k<<": "<<cnt<<endl;
        k++;
    }
    return(0);
}