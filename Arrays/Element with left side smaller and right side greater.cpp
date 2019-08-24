#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n], min[n], max[n];
        cin>>arr[0];
        max[0] = arr[0];
        int flag =0;
        for(int i=1; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]>=max[i-1])
            {
                max[i]=arr[i];
            }
            else
            {
                max[i] = max[i-1];
            }
        }
        min[n-1] = arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]<=min[i+1])
            {
                min[i] = arr[i];
            }
            else
            {
                min[i] = min[i+1];
            }
        }
        
        for(int i=1; i<n-1; i++)
        {
            if(arr[i]>=max[i]&&arr[i]<=min[i])
            {   
                flag = 1;
                cout<< arr[i] << endl;
                break;
            }
        }
        if(flag==0)
            cout<<-1<<endl;
    }
	return 0;
}
