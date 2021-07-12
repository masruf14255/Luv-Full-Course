/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//SET, UNORDERED SET & MULTISET : Beginners Tutorial for C+ STL | CP Course | EP 27

#include<bits/stdc++.h>
using namespace std;



void print(set<string>&s)
{
    for(string value : s)
    {
        cout<<value<<endl;
    }
    for(auto it = s.begin(); it!=s.end(); ++it)
    {
        cout<<(*it)<<endl;
    }
}
int main()
{
    set<string> s;
    s.insert("abc");//log(n)
    s.insert("sdf");
    s.insert("aas");

    auto it = s.find("abc");
    if(it!=s.end())
    {
        cout<<(*it);
    }

    print(s);

}



---------------------------------------------
/*given n strings, print unique strings in
lexicograpical order

n<=10^5;
|S|<=100000*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>s;
    int n;
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    for(auto value : s)
    {
        cout<<value<<endl;
    }
}


----------------------------------------------


// unordered set


#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<string>m;
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

-------------------------


/*given n strings, print unique strings in
lexicograpical order

n<=10^5;
|S|<=100000*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>s;
    int n;
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while(q--)
    {
        string str;
        cin>>str;
        if(s.find(str)==s.end())
        {
            cout<<"no\n";
        }
        else
        {
            cout<<"yes\n";
        }
    }
    for(auto value : s)
    {
        cout<<value<<endl;
    }
}


multiple keys will allow multiset
