#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
        if(n==1)
        {   
            cin>>n;
            cout<<1<<endl;
            continue;
        }
	    int arr[n], sr=0, flag=0;
	    
	    for (int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	        sr+=arr[i];
	    }
	    int sc = 0;
	    sr-=arr[0];
	    for (int i=1;i<n;i++)
	    {
	        sc+=arr[i-1];
	        sr-=arr[i];
	        if(sc==sr)
	        {
	            cout<<i+1<<endl;
	            flag = 1;
	            break;
	        }
	    }
	    
	    if(flag == 0)
	        cout<<-1<<endl;
	}
	return 0;
}
