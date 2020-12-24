#include<bits/stdc++.h>
#define ll long long
#define sz size
#define mod 1000000007
#define fi  first
#define se  second
using namespace std;

ll unique(ll x)
{
           ll sum;
      for(ll i=1;i<599999;i++)
      {
           ll r=i;
           sum=0;
           while(r)
           {
               sum+=r%10;
               r=r/10;
           }
           if(sum==x)
           return i;
      }
         return -1;
}

int main()
{
	 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
     #endif
    
    
    ll t;
    cin>>t;
    while(t--)
    {
      ll x;
      cin>>x;
      cout<<unique(x)<<endl;
    }
	 	return 0;
}