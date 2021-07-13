/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Balanced Brackets Matching: Easiest Code using Stack | CP Course | EP 31

unordered_map<char,int>symbols={{'[',-1},{'(',-2},{'{',-3},{'[',1},{'(',2},{'{',3}};
string isBalanced(string s)
{
    stack<char>st;
    for(char bracket:s)
    {
        if(symbole[bracket]<0)
        {
            st.push_back(bracket);
        }
        else
        {
            if(st.empty()) return "NO";
            char top=st.top();
            st.pop();
            if(symbols[top]+symbols[bracket]!=0)
            {
                return "NO";
            }
        }
    }
    if(st.empty()) return "YES";
    return "NO";
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
}
