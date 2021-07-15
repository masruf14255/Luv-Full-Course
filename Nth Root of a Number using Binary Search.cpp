/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Nth Root of a Number using Binary Search | CP Course | EP 42

#include<bits/stdc++.h>
using namespace std;



double eps= 1e-6;


int main()
{
    double x;
    int n;
    cin>>x>>n;
    double lo=1,hi=x,mid;
    while(hi-lo>eps)
    {
        mid=(lo+hi)/2;
        if(mid*mid<x)
        {
            lo=mid;
        }
        else
        {
            hi=mid;
        }
    }
    cout<<setprecision(10)<<lo<<"\n"<<hi<<endl;
    cout<<pow(x,1.0/n)<<endl;
}
