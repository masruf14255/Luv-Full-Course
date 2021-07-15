/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Binary Search & How I write it | Tutorial | CP Course | EP 40

#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     vector<int>v(n);
     for(int i=0; i<n;++i)
     {
        cin>>v[i];
     }
     int tofind;
     cin>>tofind;
     int low=0,hi=0;
     int mid;
     while(hi-low>1)
     {
        int mid=(hi+low)/2;
        if(v[mid]<tofind)
        {
            low=mid+1;
        }
        else
        {
            hi=mid;
        }
     }
     if(v[low]==tofind)
     {
        cout<<low<<endl;
     }
     else if(v[hi]==tofind)
     {
        cout<<"Not found\n";
     }
}
