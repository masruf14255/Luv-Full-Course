/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Subset Generation using Recursion and backtracking | CP Course | EP 39



//vector<int>nums;

void generate(vector<int>&subset, int i, vector<int>& nums)
{

    if(i==nums.size())
    {
        subset.push_back(subset);
        return;
    }
    generate(subset,i+1,nums);

    subset.push_back(nums[i]);
    genarte(subset,i+1, nums);
    subset.pop_back();
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; ++i)
    {
        cin>>nums[i];
    }
    vector<int>empty;
    genarte(empty,0, nums);
    for(auto subset: subsets)
    {
        for(int ele: subset)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}
