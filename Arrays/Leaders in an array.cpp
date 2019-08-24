#include <iostream>
#include <stack>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
        stack <int> s;
        int max = 0;
        //s.push(arr[n-1]);
        for(int i=n-1; i>=0; i--)
        {
            if(arr[i]>=max)
            {
                s.push(arr[i]);
                max = arr[i];
            }
        }
        while(!s.empty())
        {
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<endl;
	}
	return 0;
}
