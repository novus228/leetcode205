class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> a;
        long int num = arr.size();
        for(auto data : arr)
        {
            a.push_back(data);
        }
        long int i=0;
        for(auto data : a)
        {
            if(data==0)
            {
                arr[i]=0;
                i++;
                if(i==num)
                    break;
                arr[i]=0;
                i++;
                if(i==num)
                    break;
                continue;
            }
            arr[i]=data;
            i++;
            if(i==num)
                break;
        }
        
    }
};