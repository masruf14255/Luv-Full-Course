/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Nesting in STL Maps and Sets with Example Questions | Competitive Programming Course | EP 29

#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*map<pair<int,int> ,int>m;
    map<set<int>,int>m;
    pair<int,int>p1,p2;
    p1={1,2};
    p2={3,4};*/

    map<pair<string,string>,vector<int> >m;
    int n;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        string fn,ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int j=0; j<ct; ++j)
        {
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }
    }
    for(auto &pr : m)
    {
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout<<full_name.first<<" "<<full_name.second;
        cout<<list.size()<<endl;
    }

}

-------------------------

// Example

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,multiset<string> > marks_map;
    int n;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        int marks;
        string name;
        cin>>name>>marks;
        mar[marks],insert(name);
    }
    auto last_it = --marks_map.end();
    for(auto & marks_students_pr : marks_map)
    {
        auto &students = marks_students_pr.second;
        int marks = marks_students_pr.first;
        for(auto student : students)
        {
            cout<<student<<" "<<-1*marks<<endl;
        }
        if(cur_it==marks_map.begin())break;
        cur_it--;
    }
}
