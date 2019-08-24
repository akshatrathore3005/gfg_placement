#include <iostream>
using namespace std;
//#include <string.h>
#include <string>

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    //string sr = strrev(s);
	    //cout<<sr<<"sfjkhdf"<<endl;
	    int l = s.length();
	    //cout<<"length: "<<l<<endl;
	    int flag = 0;
	    for(int i=l-1; i>=0; i--)
	    {
	        if(s[i]=='1')
	        {
	            cout<<i<<endl;
	            flag = 1;
	            break;
	        }
	    }
	    
	    if(flag == 0)
	        cout<<-1<<endl;
	}
	return 0;
}
