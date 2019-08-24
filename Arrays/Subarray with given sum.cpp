#include <iostream>
using namespace std;

int main() {
	int t; 
	cin>>t;
	while(t--)
	{
	    int n,s;
	    cin>>n>>s;
	    int arr[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
        int st = 0, en = 1, cs =arr[0];
        int flag =0;
        while(st<n&&en<=n&&st<=en)
        {
            if(cs==s)
            {   
                flag = 1;
                break;
            }
            else if(cs>s)
            {
                cs-=arr[st];
                st++;
            }
            else if(cs<s)
            {
                
                cs+=arr[en];
                en++;
            }
        }
        if(flag==1)
            cout<<st+1<<" "<<en<<endl;
        else
            cout<<-1<<endl;
            
	}
	return 0;
}
