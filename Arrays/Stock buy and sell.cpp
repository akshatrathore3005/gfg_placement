#include <iostream>
#include <queue>
using namespace std;

void myprint(queue <int> q)
{   
    int n = q.size();
    
    if(n==0)
    {
        cout<<"No Profit"<<endl;
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(i%2 == 0)
        {
            cout<<"("<<q.front()<<" ";
        }
        else
        {
            cout<<q.front()<<") ";
        }
        q.pop();
    }
    cout<<endl;
}

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
	        
        queue <int> q;
        bool min = false; // false means we are searching for min, true means we are searching for max
        if(arr[0]<arr[1])
        {
            q.push(0);
            min = true; 
        }
        
        for (int i=1; i<n-1; i++)
        {
            if(min == true && arr[i]>arr[i-1] && arr[i] > arr[i+1]) //min =true means we have already got a minima and now we search for maxima
            {
                q.push(i);
                min = false;
            }
            
            else if(min == false &&arr[i]<arr[i-1] && arr[i]<arr[i+1])
            {
                q.push(i);
                min = true;
            }
        }
        
        if(min == true && arr[n-1]>arr[n-2])
        {
            q.push(n-1);
        }
        
        // while(!q.empty())
        // {
        //     cout<<q.front()<<" ";
        //     q.pop();
        // }
        
        myprint(q);
	}
	return 0;
}
