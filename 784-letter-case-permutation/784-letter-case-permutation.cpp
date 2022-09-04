class Solution {
public:
    set<string> ans;
    //int num=0;
    void recur(string s,int cur,int tot)
    {
        if(cur==tot)
        {
            return;
        }
        while(!isalpha(s[cur]))
        {
            cur++;
            if(cur==tot)return;
        }
        ans.insert(s);
        recur(s,cur+1,tot);
        if(islower(s[cur]))
        {
            s[cur]=toupper(s[cur]);
        }
        else
        {
            s[cur]=tolower(s[cur]);
        }
        ans.insert(s);
        recur(s,cur+1,tot);
        
    }
    vector<string> letterCasePermutation(string s) {
        int num=s.size();
        recur(s,0,num);
        vector<string> a;
        if(ans.size()==0)
        {
            a.push_back(s);
            return a;
        }
        for(auto it:ans)a.push_back(it);
        return a;
    }
};