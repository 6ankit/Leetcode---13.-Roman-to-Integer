int romanToInt(string s) {
        unordered_map<char,int>mp;
        string st="IVXLCDM";
        vector<int> ans={1,5,10,50,100,500,1000};
        for(int i=0;i<ans.size();i++)
        {
            mp[st[i]]=ans[i];
        }
        int sum=0;
        for(int i=0;i<s.length()-1;i++)
        {
           int k=mp[s[i]];
          int c=mp[s[i+1]];
           if(k<c)
           {
            sum-=k;
           }
           else sum+=k;
           
        }
        int c=mp[s[s.length()-1]];
        sum+=c;
        return sum;
    }
