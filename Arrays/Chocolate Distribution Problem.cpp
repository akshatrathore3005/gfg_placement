#include <iostream>
#include <algorithm> 
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--)
	{
	    int n;
	    cin>>n;
	    int arr[n],m;
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
        cin>>m;
        sort(arr, arr+n);
        int min = INT_MAX;
        for(int i=0; i<n-m+1; i++)
        {
            if(arr[i+m-1] - arr[i] < min)
                min = arr[i+m-1]-arr[i];
        }
        cout<<min<<endl;
	}
	return 0;
}
