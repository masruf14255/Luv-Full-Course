/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Binary Exponentiation : Recursive Method | CP Course | EP 54.1

#include<bits/stdc++.h>
using namespace std;

int binaryExpRec(int a,int b)
{
    if(b==0) return 1;
    long res = binaryExpRec(a, b/2);
    if(n&1)
    {
        return a*res*res;
    }
    else
    {
        return res * res;
    }
}
int main()
{
    int a=2,b=13;
    cout<<binaryExpRec(a,b);
    cout<<pow(2,13);
}

// mod ->>>>>

#include<bits/stdc++.h>
using namespace std;

int binaryExpRec(int a,int b,int m)
{
    if(b==0) return 1;
    long long res = binaryExpRec(a, b/2);
    if(n&1)
    {
        return ((a*(res*1LL*res)%m))%m;
    }
    else
    {
        return (res * 1LL*res)%m;
    }
}
int main()
{
    int a=2,b=13;
    cout<<binaryExpRec(a,b);
    cout<<pow(2,13);
}
