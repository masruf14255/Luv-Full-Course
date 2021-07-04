/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

Merge Sort & Selection Sort Tutorial for Beginners | Competitive Programming Course | EP 19
O(n^2)
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

    for(int i=0; i<n; ++i)
    {
        int min=i;
        for(int j=i+1; j<n; ++j)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        swap(a[i],a[min]);
    }
    for(int i=0; i<n; ++i)
    {
        cout<<a[i]<<" ";
    }
}

merge sort ->>

/*#include<bits/stdc++.h>
using namespace std;
int main()
{

}*/

void merge(int l,int r,int mid)
{
    int l_sz=mid-1+1;
    int L[l_sz+1];
    int r_sz=r-mid;
    int R[r_sz+1];

    for(int i=0; i<l_sz; ++i)
    {
        L[i]=a[i+l];
    }
    for(int i=0; i<r_sz; ++i)
    {
        R[i]=a[i+mid+1];
    }
    L[l_sz]=R[r_sz]=INT_MAX;
    int l_i=0;
    int r_i=0;
    for(int i=l; i<=r; ++i)
    {
        if(L[l_i]<=R[r_i])
        {
            a[i]=L[l_i];
            l_i++;
        }
        else
        {
            a[i]=R[r_i];
            r_i++;
        }
    }

}


void mergesort(int l, int r)
{

    if(l==r) return;
    int mid=(l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    merge(l,r,mid);
}


C++ STL : Full Overview in 10 Minutes | Competitive Programming Course | EP 20

Containers

Iterators

Algorithms

Functors

Pairs and Vectors: C++ STL Tutorial for Beginners | Competitive Programming Course | EP 21

pair store two value at a same time


int main()
{
    // pair<int,string>p;
    // p=make_pair(2,"abs"); // intialization
    // cout<<p.first<<" "<<p.second<<endl;

    // pair array ->
    // pair<int,int>p_array[3];
    // p_array[0]={1,2};
    // p_array[1]={2,3};
    // p_array[2]={3,4};
    // for(int i=0; i<=2; i++)
    // {
    //     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;

    // }
}

vector----->

dynamic size array->






void printvec(vector<int>v)
{
    cout<<"size: "<<v.size()<<endl;
    for(int i=0; i<v.size(); ++i)
    {
        cout<v[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int a[10];// 10 memeory riserved
    vector<int>v;// still null
    vector<int>v(10,3);// vector pre fill;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);//o(1);
        // remove last element v.pop_back(x)
    }

    // vector copy vector<int>v2=v; o(n)
    printvec(v);

}
