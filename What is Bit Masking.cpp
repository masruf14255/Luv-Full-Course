/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Power of XOR Operator | CP Course | EP 50

/*given array a of n integers. all integers are
present in even count except one
find that one integer which has odd count in
O(n) time complexity and O(1) space;


N<10^5
a[i]<10^5
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=4,b=6;

    a=a^b;
    b=b^a; // b=b^(a^b)->b^b^a->0^a==a

    a=a^b;
    //a=(a^b)^b->b
    cout<<a<<" "<<b<<endl;
}

/*given array a of n integers. all integers are
present in even count except one
find that one integer which has odd count in
O(n) time complexity and O(1) space;


N<10^5
a[i]<10^5
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // c^a^b^c^b-->
    // a^c^b^b-->
    // a^c^c-->
    // 0^a-->
    // a

    int n;
    cin>>n;
    int x;
    int ans=0;
    for(int i=0; i<n; ++i)
    {
        cin>>x;
        ans^=x;
    }
    cout<<ans<<endl;
}

//What is Bit Masking with example Question | CP Course | EP 51


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>maska(n,0);
    for(int i=0; i<n; ++i)
    {
        int numw;
        cin>>numw;
        iont masks=0;
        for(int j=0; i<numw;++j)
        {
            int day;
            cin>>day;
            masks=(masks | (1<<day));
        }
        masks[i]=masks;
    }
    int max_days=0;
    int person1=-1;
    int person2=-1;
    for(int i=0; i<n; ++i)
    {
        for(int j=i+1; j<n; ++j)
        {
            int intersection=(masks[i]&masks[j]);
            int comon_days=__builtin_popcount(intersection);
            if(comon_days>max_days)
            {
                max_days=comon_days;
                person1=i;
                person2=j;
            }
        }
    }
    cout<<person1<<" "<<person2<<endl;
}
