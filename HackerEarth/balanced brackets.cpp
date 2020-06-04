//SAURABHSAHAB
//#include <boost/math/common_factor.hpp>
//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ln length()
#define ll long long 
#define f(i,s,n) for(ll i=s;i<n;i++)
#define T ll t; cin>>t; while(t--)
#define TC cerr<<"\nTime elapsed: "<<1000*clock() /CLOCKS_PER_SEC <<"ms\n";

bool PB(string str) 
{ 
	stack<char> s; 
	char x; 

	f(i,0,str.ln) 
	{ 
		if (str[i]=='('||str[i]=='['||str[i]=='{') 
		{
			s.push(str[i]); 
			continue; 
		} 

		if (s.empty()) 
		return 0; 

		switch (str[i]) 
		{ 
case ')': 

			x = s.top(); 
			s.pop(); 
			if (x=='{' || x=='[') 
				return 0; 
			    break; 

case '}': 

			x = s.top(); 
			s.pop(); 
			if (x=='(' || x=='[') 
				return 0; 
			    break; 

case ']': 
            x = s.top(); 
			s.pop(); 
			if (x =='(' || x == '{') 
				return 0; 
			    break; 
		} 
	} 
	return (s.empty()); 
} 

int main() 
{ 
    T{
	string str;
    cin>>str;

	if (PB(str)) 
		cout << "YES"<<"\n"; 
	else
		cout << "NO"<<"\n"; 
} 
}
