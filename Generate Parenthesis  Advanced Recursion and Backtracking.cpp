/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Generate Parenthesis: Advanced Recursion and Backtracking
 | CP Course | EP 38

 #include<bits/stdc++.h>
 using namespace std;

vector<string>valid;


void generate(string s, int open,int close)
{
    if(open==0 && close==0)
    {
        valid.push_back(s);
        return;
    }

    //generate(s,open,close);
    if(open>0)
    {
        s.push_back('(');
        generate(s,open-1,close);
        s.pop_back();
    }
    if(close>0)
    {
        if(open<close)
        {
            s.push_back(')');
            generate(s,open,close-1);
            s.pop_back();
        }
    }
}

 int main()
 {

 }
