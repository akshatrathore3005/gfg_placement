#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)
            cin>>arr[i];
            
        for(int i=0; i<n; i++) 
            arr[i] = arr[i] * arr[i];
            
        sort(arr, arr+n);
        int flag = 0;
        for(int i = n-1; i>=2; i--)
        {
            int l = 0;
            int r = n-2;
            
            while (l < r)
            {
                if (arr[l] + arr[r] == arr[i])
                {
                    flag = 1;
                    break;
                }
                else if(arr[l]+arr[r] < arr[i])
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
            if (flag == 1)
            {
                cout<<"Yes"<<endl;
                break;
            }
        }
        if(flag ==  0)
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
