#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s1, s2;
	    cin>>s1>>s2;
	    string rot1 = "";
	    string rot2= "";
	    int len = s1.length();
	    rot1 += s1.substr(2) + s1.substr(0,2);
	    rot2 += s1.substr(len-2) + s1.substr(0,len-2);
	    
	    if(s2==rot1 || s2==rot2)
	        cout<<1<<endl;
        else
            cout<<0<<endl;
	}
	return 0;
}
