#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n], s=0;
	    
	    for(int i=0; i<n-1; i++)
	    {
	        cin>>arr[i];
	        s+=arr[i];
	        //cout<<s<<" ";
	        
	    }
	    //cout<<s;
	    s=(n*(n+1))/2 - s;
	    cout<<s<<endl;
	    
	    
	}
	
	return 0;
}
