class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>dict(128,-1);
        int start=-1,mx=0;
        for(int i=0;i<s.size();i++){
            if(dict[s[i]]>start)start=dict[s[i]];
            dict[s[i]]=i;
            mx=max(mx,i-start);
        }
        return mx;
    }
};


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,mx=0;
        vector<int>mp(256,-1);
        while(r<s.size()){
            if(mp[s[r]]!=-1)l=max(mp[s[r]]+1,l);
            mp[s[r]]=r;

            mx=max(mx,r-l+1);
            r++;
        }
        
        
        return mx;
    }
};
