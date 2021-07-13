/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Stacks & Queues: C++ STL Tutorials | Competitive Programming Course | EP 30

//stack - lifo

// size,top element

// queue - fifo

#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}

-------------

#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string>q;

    q.push("aa");
    q.push("asda");
    q.push("asa");
    q.push("ada");
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
}
