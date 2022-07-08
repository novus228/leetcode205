// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        map<int,int> m;
    for(long int i=0;i<n;i++)
    {
        if(m[a[i]]>=1)
        {
            m[a[i]]+=1;
        }
        else
        {
            m[a[i]]=1;
        }
    }
    long int count=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<m[i];j++)
        {
            a[count]=i;
            count++;
        }
    }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends