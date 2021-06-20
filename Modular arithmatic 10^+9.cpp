/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/

Why Print answer modulo 10^9+7 | Modular Arithmetic | Competitive Programming Course | EP 11

Modular Arithmetic

Modular arithmetic formulae : (0:00)

(a+b)%m=((a%m)+(b%m))%m;
(a*b)%m=((a%m)*(b%m))%m;
(a-b)%m=((a%m)-(b%m)+m)%m;
(a/b)%m=((a%m)*(b^-1)%m)%m;

Why print answer modulo M : (3:29)
Stepwise modulo : (7:20)
Why 10^9+7 is an ideal value of mod : (11:37)

/*given a number n. print its
factorial.h
constraints
1<=n<=100
print answer modulo m
where m =47

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=47;
    long long fact=1;
    for(int i=2; i<=n; i++)
    {
        fact=(fact*i)%m;
    }
    cout<<fact<<endl;// overflow issue
}
