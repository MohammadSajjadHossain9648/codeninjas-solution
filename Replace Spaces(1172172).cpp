#include<iostream>
using namespace std;
/*
    to know more: https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172
*/
string replaceSpaces(string s)
{
    string temp;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] ==' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(s[i]);
        }
    }

    return temp;
}
int main()
{
    string s = "Coding Ninjas Is A Coding Platform";
    cout<<"\nString before replacing spaces with given character: \n"<<s<<endl;

    string result = replaceSpaces(s);
    cout<<"\nString after replacing spaces with given character: \n"<<result<<endl;

    //output:
    //    String before replacing spaces with given character:
    //    Coding Ninjas Is A Coding Platform
    //
    //    String after replacing spaces with given character:
    //    Coding@40Ninjas@40Is@40A@40Coding@40Platform
}
