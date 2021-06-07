Arrays and Size Limits for Local & Global Arrays | C++ Basics 5 | CP Course | EP 6

Practice Questions :
-- Easy :
https://www.hackerearth.com/practice/...
https://practice.geeksforgeeks.org/pr...
https://www.hackerrank.com/challenges...
https://practice.geeksforgeeks.org/pr...
https://www.hackerearth.com/practice/...
https://www.hackerearth.com/practice/...
https://www.hackerearth.com/practice/...
https://www.hackerearth.com/practice/...
https://www.hackerearth.com/practice/...
https://practice.geeksforgeeks.org/pr...
https://www.spoj.com/problems/MOZSATLA/
https://www.codechef.com/LRNDSA01/pro...

-- Medium :
https://www.hackerearth.com/practice/...


Timestamps:
Arrays : (0:00)
Character Arrays vs C++ strings : (4:23)
2-D and N-D Arrays : (5:40)
Size limits in Arrays : (12:02)

/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long l;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ull;

#define sc scanf
#define pf printf
#define nl pf("\n")

int main()
{
    int a[10];
    a[0]=0;
    a[9]=10;
    cout<<a[9];
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
    }
    cout<<sum;

}

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<a[i][j];
        }
    }
}

segmentation fault part;

const int n=1e7;
    int a[n];
    a[n-1]=7;
int main()
{
    int a[1001];
    int n=1e5;
    int a[n];
    a[n-1]=7;
}
