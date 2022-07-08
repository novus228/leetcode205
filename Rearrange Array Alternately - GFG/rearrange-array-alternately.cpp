// { Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	long long l=n-1;
    	long long m=0;
    	vector<int> lv;
    	lv.push_back(arr[l]);
    	vector<int> mv;
    	mv.push_back(arr[m]);
    	long int mid=n/2;
    	if(n%2==0)
    	{
    	    while(m<mid && l>=mid)
    	    {
    	        m++;
    	        mv.push_back(arr[m]);
    	        l--;
    	        lv.push_back(arr[l]);
    	    }
    	    long int count=0;
    	    for(long int i=0;i<n;i+=2)
    	    {
    	        arr[i]=lv[count];
    	        arr[i+1]=mv[count];
    	        count++;
    	    }
    	}
    	else
    	{
    	    long long val = arr[mid];
    	    while(m<mid && l>=mid)
    	    {
    	        m++;
    	        mv.push_back(arr[m]);
    	        l--;
    	        lv.push_back(arr[l]);
    	    }
    	    long int count=0;
    	    for(long int i=0;i<n;i+=2)
    	    {
    	        arr[i]=lv[count];
    	        arr[i+1]=mv[count];
    	        count++;
    	    }
    	    arr[n-1]=val;
    	    
    	}
    	
    	 
    }
};

// { Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 
  // } Driver Code Ends