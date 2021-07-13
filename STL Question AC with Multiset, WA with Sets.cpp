/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//STL Question: AC with Multiset, WA with Sets | Competitive Programming Course | EP 28

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        multiset<long long>bags;
        for(int i=0; i<n; i++)
        {
            long long cand_ct;
            cin>>cand_ct;
            bags.insert(cand_ct);
        }
        long long total_candies=0;
        for(int i=0; i<k; ++i)
        {
            auto last_it=(--bags.end());
            long long cand_ct=*last_it;
            total_candies+=cand_ct;
            bags.erase(last_it);
            bags.insert(cand_ct/2);
        }
        cout<<total_candies<<endl;
    }
}
