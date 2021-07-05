/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//ITERATORS: Pointer like structure in C++ STL | Competitive Programming Course | EP 23

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={2,3,4,5,6,7};
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //iterator declear
    vector<int> :: iterator iy = v.begin();
    cout<<(*it)<<endl;
    for(it = v.begin(); it!=v.end(); ++it)
    {
        cout<<(*it)<<endl;
    }

    vector<pair<int,int> >v_p={{1,2}, {3,4}, {5,6}};
    vector<pair<int,int> > :: ierator it;
    for(it = v_p.begin(); it!=v_p.end(); ++it)
    {
        cout<<(*it).first<<" "<<(*it).second()<<endl;
    }

    //  another way to pair point  (*it).first == (it->fisrt);
    for(it = v_p.begin(); it!=v_p.end(); ++it)
    {
        cout<<(it->fisrt)<<" "<<(it->second)<<endl;
    }
}


How to write Iterators Code in Short in C++ STL ? | Auto and Range based loops | CP COURSE | EP 24


#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={2,3,4,5,6,7};
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //iterator declear
    vector<int> :: iterator iy = v.begin();
    cout<<(*it)<<endl;
    for(it = v.begin(); it!=v.end(); ++it)
    {
        cout<<(*it)<<endl;
    }

    // range base loop

    // copy
    for(int value : v)
    {
        cout<<value<<" ";
    }
    cout<<endl;

    //by refrance value arrive
    for(int &value : v)
    {
        cout<<value<<" ";
    }
    cout<<endl;

    // using of auto
    // its determine automatic weather it is vector or pair or set

    vector<pair<int,int> >v_p={{1,2},{3,4},{5,6}};
    for(auto &value = v_p)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }

}

