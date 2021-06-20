/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/

Codechef GCDQ: Easy Medium Question on Prefix Computation | CP Course | EP 14

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int forward[n+10];
        int backward[n+10];
        forward[0]=backward[n+1]=0;
        int a[n+10];
        for(int i=1; i<=n; ++i)
        {
            cin>>a[i];
        }
        for(int i=1; i<=n; ++i)
        {
           forward[i]=__gcd(forward[i-1],a[i]);
        }
        for(int i=n; i>=1; --i)
        {
           backward=__gcd(backward[i+1],a[i]);
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            int gc=0;
            for(int i=1; i<=l-1; ++i)
            {
                gc=_gcd(gc,a[i]);
            }
            for(int i=r+1; i<=n; ++i)
            {
                gc=_gcd(gc,a[i]);
            }
            cout<<__gcd(forward[l-1], backward[r+1])<<endl;

        }
    }
}


// preffix sum part

#include<bits/stdc++.h>
using namespace std;

const int N=1e7+10;
long long int ar[N];
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int a,b,d;
        cin>>a>>b>>d;
        ar[a]+=d;
        ar[b+1]-=d;

    }
    for(int i=1; i<=n; ++i)
    {
        ar[i]+=ar[i-1];
    }
    long long mx=-1;
    for(int i=1; i<=n; ++i)
    {
        if(mx<ar[i])
        {
            mx=ar[i];
        }
    }
    cout<<mx<<endl;
}


Prefix Sum + Hashing HARD Question
 | Competitive Programming Course | EP 16

Timestamps:
Brute Force Approach : (0:00)
Optimisation using Hashing + Prefix : (10:45)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            int hash[26];
            for(int i=0; i<26; ++i)
            {
                hash[i]=0;
            }
            l--,r--;
            for(int i=l; i<=r; ++i)
            {
                hash[s[i]-'a']++;
            }
            inr oddcnt=0;
            for(int i=l; i<=r; ++i)
            {
                if(hash[i]%2!=0)oddcnt++;
            }
            if(oddcnt>1) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
}

optimization part ->

#include<bits/stdc++.h>
using namespace std;
const N=1e5+10;
int hash[N][26];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0; i<n; i++)
        {

        }
        int n,q;
        cin>>n>>q;
        string s;
        for(int i=0; i<n; ++i)
        {
            hash[i][s[i]-'a']++;
        }
        for(int i=0; i<26; i++)
        {
            for(int j=0; j<n; ++j)
            {
                hash[j][i]+=hash[j-1][i];
            }
        }
        cin>>s;
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            inr oddcnt=0;
            for(int i=0; i<26; i++)
            {
                int charcnt=hash[r][i]-hash
                [l-1][i];
                if(charcnt%2!=0) oddcnt++;
            }
            if(oddcnt>1) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
}
