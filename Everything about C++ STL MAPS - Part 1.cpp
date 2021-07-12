/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Everything about C++ STL MAPS - Part 1 | Competitive Programming Course | Episode 25


//  multimap need in some few problems

Basics of Map : (0:00)
Basic code of Map : (3:44)
Find And Erase : (11:59)
Time complexity dependency on keys: (16:45)
Question on Map : (19:10)

map values are pairs
its not continues

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>m;
    m[1]="abc";
    m[2]="cdc";
    m[3]="sas";
    m.insert({4,"afg"});
    auto it = m.find(3);
    if(it!=m.end())
    {
        m.erase(it);//key values
    }
    //m.clear(); will delete all elements
    if(it==m.end())
    {
        cout<<"No";
    }
    else
    {
        cout<<(*it).first<<(*it).second<<endl;
    }
    //map<int,string> :: iterator it;
    // for(int it=m.begin(); it!=m.end(); ++it)
    // {
    //     cout<<(*it).first<<(*it).second<<endl;
    // }
    for(auto &pr : m)
    {
        cout<<pr.first<<pr.second<<endl;
    }

}

/*given n strings, print unique strings in
lexicograpical order with their
frequence

n<=10^5;
|S|<=100*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    int n;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        string s;
        cin>>s;
        //m[s]=m[s]+1;
        m[s]++;
    }
    for(auto pr : m)
    {
        cout<<pr.first<<pr.second<<endl;
    }
}/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Everything about C++ STL MAPS - Part 1 | Competitive Programming Course | Episode 25


//  multimap need in some few problems

Basics of Map : (0:00)
Basic code of Map : (3:44)
Find And Erase : (11:59)
Time complexity dependency on keys: (16:45)
Question on Map : (19:10)

map values are pairs
its not continues

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>m;
    m[1]="abc";
    m[2]="cdc";
    m[3]="sas";
    m.insert({4,"afg"});
    auto it = m.find(3);
    if(it!=m.end())
    {
        m.erase(it);//key values
    }
    //m.clear(); will delete all elements
    if(it==m.end())
    {
        cout<<"No";
    }
    else
    {
        cout<<(*it).first<<(*it).second<<endl;
    }
    //map<int,string> :: iterator it;
    // for(int it=m.begin(); it!=m.end(); ++it)
    // {
    //     cout<<(*it).first<<(*it).second<<endl;
    // }
    for(auto &pr : m)
    {
        cout<<pr.first<<pr.second<<endl;
    }

}

/*given n strings, print unique strings in
lexicograpical order with their
frequence

n<=10^5;
|S|<=100*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    int n;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        string s;
        cin>>s;
        //m[s]=m[s]+1;
        m[s]++;
    }
    for(auto pr : m)
    {
        cout<<pr.first<<pr.second<<endl;
    }
}
