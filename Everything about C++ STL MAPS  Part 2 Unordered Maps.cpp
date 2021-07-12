/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Everything about C++ STL MAPS - Part 2: Unordered Maps & Multimaps

Timestamps:
Unordered maps : (0:00)
Question on Unordered Maps : (5:25)
Multimaps : (6:58)

here insertion time complexity will be O(1);


map values are pairs
its not continues

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,string>m;
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

/*given n strings and q queries, print unique strings in
lexicograpical order with their
frequence

n<=10^5;
|S|<=100*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int>m;
    int n;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        string s;
        cin>>s;
        //m[s]=m[s]+1;
        m[s]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
    // for(auto pr : m)
    // {
    //     cout<<pr.first<<pr.second<<endl;
    // }
}

