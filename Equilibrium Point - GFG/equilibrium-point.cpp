// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        if(n==1)
        {
            return 1;
        }
        long int i=0,j=n-1;
        long int fsum=0,lsum=0;
        fsum+=a[i];
        lsum+=a[j];
        while(i<j)
        {
            if(fsum==lsum && (abs(i-j))==2)
            {
                return ((i+j)/2)+1;
            }
            else if(fsum==lsum)
            {
                i++;
                fsum+=a[i];j--;
                lsum+=a[j];
            }
            else if(fsum>lsum)
            {
                j--;                
                lsum+=a[j];
            }
            else if(lsum>fsum)
            {
                i++;
                fsum+=a[i];
            }
        }
        return -1;
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends