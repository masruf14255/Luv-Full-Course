/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Inbuilt Sort in C++ STL Tutorial
 | Introsort | Competitive Programming Course | EP 33


 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0; i<n; ++i)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
 }



 --------------------

  vector->>>>>>>>


   #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0; i<n; ++i)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
 }


 // Comparator Function in depth Tutorial using C++ Sort





// bool cmp(pair<int,int>a,pair<int,int>b)
// {
//     if(a.first!=b.first)
//     {
//         if(a.first>b.first) return false;
//         return true;
//     }
//     else
//     {
//         if(a.second<b.second) return false;
//         return true;
//     }
// }

 bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first!=b.first)
    return a.first,b.first;

    return a.second>b.second;
}


// bool cmp(int a,int b)
// {
//     return a>b;
// }

 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    int n;
    cin>>n;
    vector<pair<int,int> >a(n);
    for(int i=0; i<n; ++i)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(),a.end(), cmp);

    // by default decreacing sort(a.begin(),a.end(), greater<pair<int,int> >());
    for(int i=0; i<n; ++i)
    {
        for(int j=i+1; j<n; ++j)
        {
            if(wswap(a[i],a[j]))
            {
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0; i<n; ++i)
    {
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    cout<<endl;
 }
