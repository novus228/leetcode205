// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        vector<int> v;
        long int n1=0,m2=0;
        while(n1+m2<n+m)
        {
            if(n1==n)
            {
                v.push_back(arr2[m2]);
                m2++;
            }
            else if(m2==m)
            {
                v.push_back(arr1[n1]);
                n1++;
            }
            else
            {
                if(arr1[n1]<arr2[m2])
                {
                    v.push_back(arr1[n1]);
                    n1++;
                }
                else 
                {
                    v.push_back(arr2[m2]);
                    m2++;
                }
            }
        }
        return v[k-1];
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends