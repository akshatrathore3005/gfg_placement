#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void myrev(string& s, int l, int r)
{   
    int n = r-l;
    for(int i =l; i<l+n/2; i++)
        swap(s[i], s[r+l-1-i]);
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    int l=0,r;
	    int n= str.length();
        for(int i=0;i<n;i++)
        {
            if(str[i]=='.')
            {
                myrev(str, l, i);
                l = i+1;
            }
        }
        myrev(str,l,n);
        
	    myrev(str,0,n);
	    cout<<str<<endl;
	}
	return 0;
}
