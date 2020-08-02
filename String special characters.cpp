#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s="a*b?!&&n)m&&c";
    stack<char>alpha;
	for(int i=0;i<s.length();i++)
	{
		if((int(s[i])<=90 && int(s[i])>=65 )||(int(s[i])<127 && int(s[i])>=97))
		{
		   alpha.push(s[i]);
		}
	}
	for(int i=0;i<s.length();i++)
	{
		if((int(s[i])<=90 && int(s[i])>=65 )||(int(s[i])<127 && int(s[i])>=97))
		{
		   cout<<alpha.top();
		   alpha.pop();
		}
		else
		{
			cout<<s[i];
		}
	}
}
