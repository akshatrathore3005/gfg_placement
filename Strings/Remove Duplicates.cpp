#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    cin.ignore();
	while(t--)
	{
	    string str;
	    getline(cin,str);
	   // cout<<str<<"afda";
	    int arr[27]={0}, len = str.length();
	    
	    for(int i=0; i<len; i++)
	    {   
	       // cout<<str[i];
            if(str[i] == ' ')
	        {
	            if(arr[26]==0)
	                cout<<" ";
	            arr[26]++;
	        }
	        else if(arr[str[i]-'a']==0)
	        {
	            cout<<str[i];
	            arr[str[i]-'a']++;
	        }
	    }
	    //for(int i=0; i<l27; i++)
	    cout<<endl;
	    
	}
	return 0;
}
