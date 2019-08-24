#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n], n0, n1, n2;
	    n0 = n1 = n2 =0;
	    for (int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	        switch(arr[i])
	        {
	            case 0: n0++;
	                break;
                case 1: n1++;
                    break;
                case 2: n2++;
                    break;
	        }
	    }
	        
        for(int i =0; i<n; i++)
        {
            if(i<n0)
            {
                cout<<0<<" ";
            }
            else if(i>=n0 && (i-n0)<n1)
            {
                cout<<1<<" ";
            }
            else
            {
                cout<<2<<" ";
            }
        }
        cout<<endl;
	        
	   
	}
	return 0;
}
