/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Upper Bound and Lower Bound in C++ STL | CP Course | EP 35\

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; ++i)
    {
        cout<<a[i];
    }
    sort(int i=0; i<n; ++i)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int *ptr = lower_bound(a,a+n,26);
    if(ptr==(a+n))
    {
        cout<<"Not found";
        return 0;
    }
    cout<<(*ptr)<<endl;
    int *ptr = upper_bound(a+4,a+n,5);
    if(ptr==(a+n))
    {
        cout<<"Not found";
        return 0;
    }
    cout<<(*ptr)<<endl;
}


--------------

// vector

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n)
    for(int i=0; i<n; ++i)
    {
        cout<<a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0; i<n; ++i)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    auto it = lower_bound(a.begin(),a.end(),26);
    if(it==a.end())
    {
        cout<<"Not found";
        return 0;
    }
    cout<<(*ptr)<<endl;
    int *ptr = upper_bound(a+4,a+n,5);
    if(ptr==(a+n))
    {
        cout<<"Not found";
        return 0;
    }
    cout<<(*it)<<endl;
}


//set

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>s;
    map<int,int>m;// lower and upper effect onm first key here
    for(int i=0; i<n; ++i)
    {
        int x;
        s.insert(x);
    }
    //O(n) - > auto it = lower_bound(a.begin(),a.end(), 5)
    auto it= s.lower_bound(a.begin(),a.end(),5);
    cout<<(*it)<<endl;
}
