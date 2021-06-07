/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
Functions, C++ references and CONTEST ALERT Information | C++ Basics - 6 | CP Course | EP 7

Relevant links :
Why return 0 is optional in main(Stackoverflow) : https://stackoverflow.com/questions/4....


Timestamps:
Functions in detail : (0:00)
Why return 0 is optional in main : (6:11)
C++ reference, Pass by value and reference  : (8:53)
Pass Arrays in function : (15:19)
Contest Information : (21:40)


#include<bits/stdc++.h>
using namespace std;

void print()
{
    cout<<"Hello World!\n";
}

int sum(int a, int b)
{
    int result =a+b;
    return result;
}

int ds(int n)
{
    int s;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
int main()
{
    print();
    cout<<sum(2,5);
    int a,b;
    cin>>a>>b;
    cout<<ds(a)+ds(b)<<endl;
}

void inc(int &n,int n1)
{
    n++;
    n1++;
}
int main()
{
    int a=3;
    int b=5;
    cout<<a<<" "<<b<<endl;
    inc(a,b);
    cout<<a<<" "<<b<<endl;
}

/*void swap(int &n,int &n1)
{
   int temp=a;
   a=b;
   b=temp;
}*/ //swap in build c++;

int main()
{
    int a=3;
    int b=5;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}


//string by reffrerance pass

void func(string &s)
{
    s="";
}

int main()
{
    string s="sdfase";
    cout<<s<endl;
    func(s);
    cout<<s<<endl;
}

//array only by reffrerance pass works ans its working by value;

void func(int a[])
{
    a[0]=5;
}

int main()
{
    string a[10];
    a[0]=7;
    cout<<a[0]<<endl;
    func(s);
    cout<<a[0]<<endl;
}


//global array diceleration for function usage;

#inclue<bits/stdc++.h>
using namespace std;

const itn N=1e3+10;
int a[N][N];
void func()
{
    a[0][0]=5;
}

int main()
{
    a[0][0]=7;
    cout<<a[0][0]<<endl;
    func();
    cout<<a[0][0]<<endl;
}
