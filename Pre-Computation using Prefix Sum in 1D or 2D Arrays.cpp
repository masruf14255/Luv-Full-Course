/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/

Pre-Computation Techniques Basics & Hashing | Competitive Programming Course | EP 12


// hasing

// given t test cases and in each test cases a number n
// print its factorial for each test case % m
// where m = 10^9+7

// contraints
// 1<=t<=10^5;
// 1<=n<=10^5;

precompute ->>

#include<bits/stdc++.h>
using namespace std;
const int M=10^9+7;

int N=10^5+10;
long long fact[N];

int main()
{
    fact[0]=fact[1]=1;
    for(int i=2; i<N; i++)
    {
        fact[i]=fact[i-1]*i;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<fact(n)<<endl;
    }
}


// given array a of n integers. given q queries ans in
// each query given a number x, print count of that in
// array.

// contraints
// 1<=n<=10^5
// 1<=a[i]<=10^7
// 1<=q<=10^5

#include<bits/stdc++.h>
using namesapce std;

const int N=1e7+10;
int hash[N];
int main()
{
    int n;
    cin>>n;
    a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        hash[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        cout<<hash[x]<<endl;
    }
}

Pre-Computation using Prefix Sum in 1D/2D Arrays | Competitive Programming Course | EP 13

PRACTICE QUESTIONS FOR HASHING & PREFIX SUM :
EASY
https://www.hackerearth.com/practice/...
https://practice.geeksforgeeks.org/pr...
https://www.hackerearth.com/practice/...
https://practice.geeksforgeeks.org/pr...
https://www.codechef.com/problems/ICL...
https://www.hackerearth.com/practice/...
https://www.hackerearth.com/practice/...
https://www.hackerearth.com/practice/...
https://leetcode.com/problems/contain...
https://www.hackerearth.com/practice/...
https://leetcode.com/problems/single-...
https://leetcode.com/problems/contain...
https://leetcode.com/problems/valid-a...

EASY MEDIUM/HARD
https://www.hackerearth.com/practice/...
https://leetcode.com/problems/word-pa...
https://leetcode.com/problems/valid-s...
https://www.hackerearth.com/practice/...
https://leetcode.com/problems/rabbits...
https://codeforces.com/contest/1426/p...

(for some difficult questions, you might require knowledge of c++ sets/maps)

Timestamps:
Prefix Sum in 1D Arrays : (0:00)
Prefix Sum in 2D Arrays : (9:46)
/*
given array a of n integers. given q quaries and in each
query given l and r print sum of array elements
from index l to r.

constraints
1<=n<=10^5
1<=a[i]<=10^9
1<=q<=10^5
1<=l, r<=n

*/

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int pf[N];
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        pf[i]=pf[i-1]+a[i];
    }

    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<pf[r]-pf[l-1]<<endl;
    }

}


// given 2d array of n*n integers. given q queries and
// in each query given a, b, c and d print
// sum of square represented by (a,b) as top
// left point and (c,d) as top bottm right point

// constraints
// 1<=n<=10^3
// 1<=a[i][j]<=10^9
// 1<=q<=10^5
// 1<=a,b,c,d<=namesapce

#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int ar[N][N];
long long pf[N][N];
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<n; ++j)
        {
            cin>>a[i][j];
            pf[i][j]=a[i][j]+pf[i-1][j]+pf[i][j-1]
            -pf[i-1][j-1];
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1]
        <<endl;;
    }
}
