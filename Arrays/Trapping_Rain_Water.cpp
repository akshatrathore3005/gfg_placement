#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int max_l[n];
	    int max_r[n];
	    
	    cin>>arr[0];
	    max_l[0] = arr[0];
	    for(int i=1; i<n; i++)
	    {
	        cin>>arr[i];
	        if(arr[i] > max_l[i-1])
	            max_l[i] = arr[i];
            else
                max_l[i] = max_l[i-1];
	    }
	    
	    max_r[n-1] = arr[n-1];
	    for(int i=n-2; i>=0; i--)
	    {
	        if(arr[i] > max_r[i+1])
	            max_r[i] = arr[i];
            else
                max_r[i] = max_r[i+1];
	    }
	    int sum = 0;
	    for(int i=0; i<n; i++)
	    {
	        sum += min(max_l[i], max_r[i])-arr[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
