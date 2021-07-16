/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Binary Exponentiation : Iterative Method | CP Course | EP 54.2

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

int binExpIter(int a,int b)
{
    int ans=1;
    while(b)
    {
        if(b&1)
        {
            ans*=a;
        }
        a=a*a;
        b>>=1;
    }
}

// // mod ----->>>

// int binExpIter(long long int a,long long int b)
// {
//     long long int ans=1;
//     while(b)
//     {
//         if(b&1)
//         {
//             ans= (ans*1LL*a)%m;
//         }
//         a=(a*1LL*a)%m;
//         b>>=1;
//     }
// }
int main()
{
    int a=2,b=13;
    cout<<binaryExpRec(a,b);
    cout<<pow(2,13);
}

//Large Exponentiation using Binary Multiplication | CP Course | EP 55


#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int binaryExp(int a,int b)
{
    int ans=1;
    while(b>0)
    {
        if(b&1)
        {
            ans=bitMultiply(ans, a);
        }
        a=bitMultiply(a, a);
        b>>=1;
    }
    return ans;
}

int bitMultiply(LL int a,LL int b)
{
    int ans=1;
    while(b>0)
    {
        if(b&1)
        {
            ans=(ans+a)%m;
        }
        a=(a+a)%m;
        b>>=1;
    }
    return ans;
}

int main()
{
    int a=2,b=13;
    cout<<binaryExpRec(a,b);
    cout<<pow(2,13);
}
