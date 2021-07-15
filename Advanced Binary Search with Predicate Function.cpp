/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Advanced Binary Search with Predicate Function | SPOJ EKO | CP Course | EP 43

#include<bits/stdc++.h>
using namespace std;
const int N 1e6+10;
int n;
long long m;
long long trees[N];


bool isWoodSufficient(int h)
{
    long long wood;
    for(int i=0; i<n; ++i)
    {
        if(tress[i]>=h)
        {
            wood+=(tress[i]-h);
        }
    }
    return wood>=m;
}

int main()
{
    cin>>n>>m;
    for(int i=0; i<n; ++i)
    {
        cin>>trees[i];
    }
    long long lo=0,hi=1e9,mid;
    while(hi-lo>1)
    {
        mid=(hi+lo)/2;
        if(isWoodSufficient(mid))
        {
            lo=mid;
        }
        else
        {
            hi=mid-1;
        }
    }
    if(isWoodSufficient(hi))
    {
        cout<<hi<<endl;
    }
    else
    {
        cout<<lo<<endl;
    }

}
