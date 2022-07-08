class Solution {
public:
    string defangIPaddr(string address) {
        string s;
        for(long int i=0;i<address.size();i++)
        {
            char c =address[i];
            if(c == '.')
            {
                s+="[.]";
            }
            else
            {
                s+=address[i];
            }
        }
        return s;
    }
};