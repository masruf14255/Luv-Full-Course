/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Nesting In Vectors: C++ STL For Beginners | Competitive Programming Course | EP 22

void printvec(vector<pair<int,int> >&v)
{
    cout<<"size: "<<v.size()<<endl;
    for(int i=0; i<v.size(); ++i)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}

int main()
{
    vector<pair<int,int> >v={{1,2},{2,3},{4,5}};
    printvec(v);
}


#include<bits/stdc++.h>
using namespace std;

void printvec(vector<pair<int,int> > &v)
{
    cout<<"size: "<<v.size()<<endl;
    for(int i=0; i<v.size(); ++i)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}

int main()
{
    vector<pair<int,int> > v;
    int n;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y}); // v.push_back(make_pair(x,y));
    }
    printvec(v);

}



----vector of vector--------

#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> &v)
{
    cout<<"size: "<<v.size()<<endl;
    for(int i=0; i<v.size(); ++i)
    {
        cout<<v[i]<<" "<<endl;
    }
    cout<<endl;
}

int main()
{
    int N;
    cin>>N;
    vector<int>v;
    for(int i=0; i<N; i++)
    {
        int n;
        cin>>n;
        vector<int>temp;
        for(int j=0; j<n; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
        for(int i=0; i<v.size(); i++)
        {
            printvec(v[i]);
        }
    }

}

------------------------------------------
int main()
{
    int N;
    cin>>N;
    vector<int>v;
    for(int i=0; i<N; i++)
    {
        int n;
        cin>>n;
        v.push_back(vector<int>());
        for(int j=0; j<n; j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
        v.push_back(temp);
        for(int i=0; i<v.size(); i++)
        {
            printvec(v[i]);
        }
    }
    v[i].push_back(10);
    for(int i=0; i<v.size(); i++)
    {
        printvec(v[i]);
    }

}
