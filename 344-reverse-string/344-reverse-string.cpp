class Solution {
public:
    void reverseString(vector<char>& s) {
        long int num = s.size();
        if(num%2==0)
        {
            long int n = num-1;
            for(long int i=0;i<num/2;i++)
                swap(s[i],s[n-i]);
        }
        else
        {
        long int n = num-1;
        for(long int i=0;i<num/2;i++)
                swap(s[i],s[n-i]);
        }
        tolower(s[num-1]);
        if(isupper(s[num-1]))
            tolower(s[num-1]);
        if(islower(s[0]))
            toupper(s[0]);
    }
};