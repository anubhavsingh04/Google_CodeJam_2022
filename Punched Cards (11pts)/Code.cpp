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
    int t;
    cin>>t;
    int i=1;
    while(t--)
    {
        int r,c; 
        cin>>r>>c;
        char arr[2*r+1][2*c+1];
        for(int i=0;i<2*r+1;i++)
        {
            for(int j=0;j<2*c+1;j++)
            {
                if(i%2==0&&j%2==0)
                arr[i][j]='+';
                else if(i%2==0&&j%2==1)
                arr[i][j]='-';
                else if(i%2==1&&j%2==0)
                arr[i][j]='|';
                else if(i%2==1&&j%2==1)
                arr[i][j]='.';
            }
        }
        arr[0][0]='.';
        arr[0][1]='.';
        arr[1][0]='.';
        arr[1][1]='.';
        cout<<"Case #"<<i<<":"<<endl;
        i++;
        for(int i=0;i<2*r+1;i++)
        {
            for(int j=0;j<2*c+1;j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
    return(0);
}
