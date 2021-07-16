/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Binary Numbers and Bits Basics For Competitive Programming | EP 47

#include<bits/stdc++.h>
using namespace std;
int main()
{

}

PLAYING WITH BITS | Set, Unset, Count Bits | CP Course | EP 48


void printBinary(int num)
{
    for(int i=10; i>=0; --i)
    {
        cout<<((num>>1)&1);
    }
    cout<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    printBinary(9);
    int a=9;
    int i=3;
    if((a&(1<<i))!=0)
    {
        cout<<"Set bit";
    }
    else
    {
        cout<<"Not set bit";
    }

    // set bit
    printBinary(a | (1<<1));

    // bit unset
    printBinary(a&(~(1<<3)));

    // toggle

    printBinary(a^(1<<2));
    printBinary(a^(1<<3));

    int ct=0;

    for(int i=31; i>=0; --i)
    {
        if(a&(1<<i)!=0);
        ct++;
    }

    //set bit count
    cout<<__builtin_popcount(a)<<endl;
    cout<<__builtin_popcountll((1LL<<35)-1)<<endl;
}

//6 Amazing BIT Manipulation Ticks You must Know | CP Course | EP 49

// odd even check

void printBinary(int num)
{
    for(int i=10; i>=0; --i)
    {
        cout<<((num>>1)&1);
    }
    cout<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0; i<8; ++i)
    {
        if(i&1)
        {
            cout<<"odd\n";
        }
        else
        {
            cout<<"else\n";
        }
    }
    // we can use right and left shift for
    // multiplication and devide (1<<2)->(*) && (5>>1)->(/)

}


// upper case lower case using bit manipulations

#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(char c = 'A'; c<='E'++c)
    {
        cout<<c<<endl;
        printBinary(int(c));
    }
    for(char c = 'a'; c<='e'++c)
    {
        cout<<c<<endl;
        printBinary(int(c));
    }
    // here just we have to set capital A 5th bit

    char A='A';
    //set 5th bit
    char a=A | (1<<5);
    cout<<a<<endl;
    //unset 5th bit
    cout<<char(a&(~(1<<5)))<<endl;

    //simple conv
    cout<<char('C'| ' ')<<endl;//just or with space for upper to lower
    cout<<char('c'&'_')<<endl;//just and with underscore for lower to upper

}

//lee sigmifecent bit clear from given position

printBinary(59);
int a=59;
int i=4;
int b=(a&((1<<(i+1)-1)));
printBinary(b);

//00000111011
// 1111111100000
// 0000000011111

// 00000111011-1


check power of 2 or not

int n=15;
if(n&(n-1))
{
    cout<<"not power of 2";
}
else
{
    cout<<"power of 2";
}
