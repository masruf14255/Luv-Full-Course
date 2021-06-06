/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/
Conditions, Loops, Jump Statements and Questions | C++ Basics - Part 3 | CP Course | EP 4

Conditions : (0:00)
If Else : (3:43)
Scopes : (6:51)
While Loop : (8:55)
For loop : (10:40)
Test Cases : (15:17)
Infinite loops : (17:15)
Break Statement : (18:46)
Continue Statement : (21:04)
Life Universe and Everything : (21:48)
Digit Sum : (23:15)

#############digit sum;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    while(n!=0)
    {
        int ld=n%10;
        sum+=ld;
        n/=10;
    }
    cout<<sum<<endl;
}

C++ Strings, Getline and Big Numbers for Competitive Programming | C++ Basics 4 | CP Course | EP 5

Timestamps:
C++ Strings  : (0:00)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //char a='aaaaaaaaasdsfd';
    string s='afaseff';
    cout<<str;
    string str1="hello";
    string str2="worldddddddddddddd";
    string result = str1+str2;
    if(str==str2)
    {
        cout<<"equal";
    }
    else
    {
        cout<<"not equal";
    }

    str[2]="t";
    str.size();
    getline(cin,str1);

    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,str);
        cout<<str;

    }

    string s;
    cin>>s;
    string sr;
    for(int i=s.size()-1; i>=0; i--)
    {
        //sr+=s[i];
        sr.push_back(s[i]);
    }
    cout<<sr<<endl;
    if(s==sr)
    {
        cout<<"Palindrom\n";
    }

    string s;
    cin>>s;
    s[s.size()-1];
    cout<<(int)s[s.size()-1]-'0';
    cout<<last_digit;




}
String Operations : (2:41)
String Access and size : (4:06)
Getline in Detail : (6:52)
Reverse a String : (14:23)
Palindrome in Strings : (16:55)
Dealing with large numbers using string : (19:11)


