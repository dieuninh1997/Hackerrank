#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
char find(char x)
{
	if(x=='a'||x=='b'||x=='c')
		return '2';
	else if(x=='d'||x=='e'||x=='f')
		return '3';
	else if(x=='g'||x=='h'||x=='i')
		return '4';
	else if(x=='j'||x=='k'||x=='l')
		return '5';
	else if(x=='m'||x=='n'||x=='o')
		return '6';
	else if(x=='p'||x=='q'||x=='r'||x=='s')
		return '7';
	else if(x=='t'||x=='u'||x=='v')
		return '8';
	else if(x=='w'||x=='x'||x=='y'||x=='z')
		return '9';
}

int main() {
  	int t;
  	cin>>t;
  	while(t--)
  	{
  		string s;
  		cin>>s;
  		string temp="";
  		int len=s.length();
		for(int i=0; i<len;i++)
		{
			temp+=find(tolower(s[i]));
		}
		cout<<temp<<endl;
	}
    return 0;
}

