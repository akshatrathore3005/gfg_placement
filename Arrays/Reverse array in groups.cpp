#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>>n>>k;
	    int arr[n];
	    
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    for(int i=1;i<=n/k + 1; i++)
	    {
	        for(int j=i*k;j>i*k-k;j--)
            {
	            if(j>n)
	                continue;
	            cout<<arr[j-1]<<" ";
	            
            }
        }
	    cout<<endl;
	}
}
