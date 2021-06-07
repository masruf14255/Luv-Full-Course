/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
Pointers in Deep and Easiest Way | C/C++ | Competitive Programming Course | EP 8

In this video we discuss in detail everything related to pointers in the easiest way possible with respect to C and C++ languages. We start of with how memory allocation works and then I explain pointers in detail how addresses work, how arrays and pointers are related, what are double pointers and much more.

Timestamps:
Memory Allocation : (0:00)
Understand Pointers : (4:15)
Pointer addition : (7:00)
Arrays and Pointers  : (8:12)
Double Pointers : (10:58)
Pointers with Code : (14:11)
Double Pointers with Code : (16:32)
Array and pointers with code : (20:10)
Passing pointers to function : (22:00)


declear any pointer ---
int x=4;
declearing pointer-
int *p_x;

p_x=&x;

accesing value of x using pointer-

*p_x

output pointer value

cout<<*p_x;

change value of x using ponter-

*p_x=5;

if we add in pointer variable
p_x=p_x+1;
just here we saw that here only added 4 byte not change in value of x;

int a[10];

int y;


if we print here just a then we just only get address of a[0]
    but if we cout *a then we get value of a[0] as well

and we add a+1 here it will print next element address and *a will print here
value of a[1]

-______________________________

at last if we use *p;
int **PP;
it will print &x  of *pp;



@@@@@@@@@@@@@@@@@@@@@@@@

double pointer----

int x=5;
int *p;
*p=&x;
pp=&p;
*pp=&x;---------->5;


int main()
{
    int x=4;
    int *p_x=&x;//store address of x
    cout<<&x;//address print if we add +1 then it will add extra 4 byte itself
    cout<<p_x;//here value of p_x will show the address of x
    cout<<*p_x;//then it will print value of x which is 4 (value at @ address)
    //value changing of this address
    *p_x=5;
    cout<<x; //then it will show 4->5
    cout<<p_x+1; //in this term we can saw that address value increase +4

    //double pointer code->
    int **p_p_x=&p_x;
     cout<<&p_x;//adress x
     cout<<p_p_x;//adress of p+x
     cout<<*p_p_x;//address of x
     cout<<**p_p_x;//5
     **p_p_x=7;
     cout<<x<<endl;



}


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

#define sc scanf;
#define pf printf;
#define nl pf("\n");
#define io ios::sync_with_stdio(false);
using namespace std;
int main()
{
    int x=10;
    int *p_x=&x;
    cout<<"Adress of x "<<&x<<endl;
    cout<<"Value of p_x "<<p_x<<endl;
    cout<<"Value of *p_x "<<*p_x<<endl;
    *p_x=5;
    cout<<"x "<<x<<endl;
    cout<<"Value of p_x+1 "<<p_x+1<<endl;
    int **p_p_x=&p_x;//adress of &x

    cout<<"Addrse of p_x "<<&p_x<<endl;
    cout<<"Value of p_p_x "<<p_p_x<<endl;
    cout<<"Value of *p_p_x "<<*p_p_x<<endl;
    cout<<"Value of **p_p_x "<<**p_p_x<<endl;
}


function array by reffrence psssing using function

void increament(int *x)
{
    (*x)++;
}
int main()
{
    int a=5;
    cout<<a<<endl;
    increament(&a);
    cout<<endl;
}
