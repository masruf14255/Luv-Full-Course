/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//C++ STL Inbuilt Algorithms - Part1 | CP Course | EP 36

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
    int min = *min_element(v.begin(),v.end());
    cout<<min<<endl;
    // same as max
    int sum = accumulate(v.begin(),v.end(),0);//total vector sum


    cout<<sum<<endl;

    int ct = count(v.begin(),v.end(),6);
    cout<<ct<<endl;

    int number = *find(v.begin, v.end(), 6);
    cout<<number<<endl;

    auto it = find(v.begin, v.end(), 6);
    if(it !=v.end())
        cout<<*it<<endl;
    else cout<<"Number not found";

    reverse(v.begin,v.end());
    for(auto val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}

--------------------------------------

Inbuilt STL Algorithms & Lambda Function - Part 2
 | CP Course | EP 37

 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    /*cout<<[](int x){return x+2;}(2)<<endl;
    cout<<[](int x, int y){return x+y;}(2, 8)<<endl;

    auto sum = [](int x,int y){return x+y;};
    cout<<sum(2,3);*/

    vector<int>v={2,3,5};
    cout<<all_of(v.begin(),v.end(),
        [](int x){return x%2==0;});

    cout<<any_of(v.begin(),v.end(),
        [](int x){return x>0;});

    cout<<none_of(v.begin(),v.end(),
        [](int x){return x>0;});
 }
