/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//How to GENERATE SUBSETS using Bit Masking | CP Course | EP 52

#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> subset(vector<int>&nums){
    int n=nums.size();
    int subset_ct=(1<<n);
    for(int mask=0; mask<subset_ct; ++mask)
    {
        vector<int>subset;
        for(int i=0; i<n; ++i)
        {
            if((mask& (1<<i))!=0)
            {
                subset.push_back(nums[i]);
            }
        }
        subset.push_back(subset);
    }
    return subset;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; ++i)
    {
        cin>>v[i];
    }
    auto all_subsets = subsets(v);
    for(auto subset:all_subsets)
    {
        for(int ele : subset)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}
