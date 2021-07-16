/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//GCD and LCM using Euclid's Algorithm With Applications | CP Course | EP 53

#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b, a%b)
}
int main()
{
    cout<<gcd(12,4)<<endl;//gcd
    cout<<12*4/gcd(12,4)<<endl;//lcm
    // build in func
    cout<<__gcd(12,4)<<endl;
}
