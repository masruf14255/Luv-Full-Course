/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

Recursion from Scratch | Beginners Tutorial | Competitive Programming Course | Ep 17

#include<bits/stdc++.h>
using namespace std;

void func(int n)
{
    if(n==0) return;
    cout<<n<<endl;
    func(n-1);
}

int main()
{
    int n;
    cin>>n;
    func(n);
}

// factorial using fuction

int fact(int n)
{
    if(n==0) return 1;
    return fact(n-1)*n;
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
}

//Digit Sum & Array Sum using Recursion | Beginners Tutorial | CP Course | Ep 18

int sum(int a[],int n)
{
    if(n<0) return 0;
    return sum(n-1,a)+a[n];
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<sum(a,n-1)<<endl;
}






int sum(int a[],int n)
{
    if(n<0) return 0;
    return sum(n-1,a) +a[n];
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<sum(a,n-1)<<end;
}



//digit sum->



int digit_sum(int n)
{
    if(n==0) return 0;
    return digit_sum(n/10)+(n%10);
}

int main()
{
    int n;
    cin>>n;
    cout<<digit_sum(n)<<end;
}
