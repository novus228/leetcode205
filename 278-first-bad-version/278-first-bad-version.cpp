// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int l = 1;
        long int h = n;
        long int mid;
        if(isBadVersion(1)==true)
            return 1;
        while(l<=h)
        {
            mid = (l+h)/2;
            if(isBadVersion(mid)==true)
            {
                if(isBadVersion(mid-1)==false)
                    return mid;
                else
                    h = mid-1;
            }
            else if(isBadVersion(mid)==false)
                l=mid+1;
        }
        return mid;
    }
};