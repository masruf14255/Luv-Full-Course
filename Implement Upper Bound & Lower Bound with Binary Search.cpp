/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Implement Upper Bound & Lower Bound with Binary Search
| CP Course | EP 41


int lower_bound(vector<int>&v,int element)
{
    int lo=0,hi=v.size()-1;
    int mid;
    while(hi-lo>1)
    {
        int mid=(hi+lo)/2;
        if(v[mid<elemnt])
        {
            lo=mid+1;
        }
        else
        {
            hi=mid;
        }
    }
    if(v[lo]>=elemnt)
    {
        return lo;
    }
    if(v[hi]>=elemnt)
    {
        return hi;
    }
    return -1;
}

int upper_bound(vector<int>&v,int element)
{
    int lo=0,hi=v.size()-1;
    int mid;
    while(hi-lo>1)
    {
        int mid=(hi+lo)/2;
        if(v[mid<=elemnt])
        {
            lo=mid+1;
        }
        else
        {
            hi=mid;
        }
    }
    if(v[lo]>=elemnt)
    {
        return lo;
    }
    if(v[hi]>=elemnt)
    {
        return hi;
    }
    return -1;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; ++i)
    {
        cin>>v[i];
    }
    int element;
    cin>>element;
    int lb= lower_bound(v,element);
    cout<<lb<<" "<<(lb!=-1 : v[lb] : -1<<endl;
    int ub= upper_bound(v,element);
    cout<<ub<<" "<<(ub!=-1 : v[ub] : -1<<endl;

}
