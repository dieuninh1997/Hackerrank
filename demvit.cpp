#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int m,n;
    cin>>m>>n;
    char a[m][n];
    int dem=0;
    for(int i=0; i<m;i++)
    {
    	for(int j=0; j<n;j++)
    	{
    		cin>>a[i][j];
    		if(a[i][j]=='V')
    			dem++;
		}
	}
    cout<<dem<<endl;
    return 0;
}

