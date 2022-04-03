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
        int sum=0;
        int mini[4];
        int v[3][4];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<4;j++)
            {
                cin>>v[i][j];
            }
        }
        mini[0]=(min(v[0][0],min(v[1][0],v[2][0])));
        mini[1]=(min(v[0][1],min(v[1][1],v[2][1])));
        mini[2]=(min(v[0][2],min(v[1][2],v[2][2])));
        mini[3]=(min(v[0][3],min(v[1][3],v[2][3])));
        for(int i=0;i<4;i++)
        {
            sum+=mini[i];
        }
        if(sum==1000000)
        {
            cout<<"Case #"<<k<<": "<<mini[0]<<" "<<mini[1]<<" "<<mini[2]<<" "<<mini[3]<<endl;
            k++;
        }
        else if(sum<1000000)
        {
            cout<<"Case #"<<k<<": "<<"IMPOSSIBLE"<<endl;
            k++;
        }
        else 
        {
            cout<<"Case #"<<k<<": "<<mini[0]<<" ";
            k++;
            if(mini[0]+mini[1]>1000000)
            {
                cout<<1000000-mini[0]<<" "<<0<<" "<<0<<endl;
            }
            else if(mini[0]+mini[1]+mini[2]>1000000)
            {
                cout<<mini[1]<<" "<<1000000-mini[0]-mini[1]<<" "<<0<<endl;
            }
            else
            {
                cout<<mini[1]<<" "<<mini[2]<<" "<<(1000000-mini[0]-mini[1]-mini[2])<<endl;
            }
        }
    }
    return(0);
}