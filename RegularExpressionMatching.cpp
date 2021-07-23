class Solution {
public:
    bool isMatch(string s, string p) {
        int n=s.length(), m=p.length();
        return solve(s,p,n,m);
    }
    
    int solve(string &s, string &p, int a, int b){
        
        if(a==0 && b==0) 
            return 1;
        if(a!=0 && b==0) 
            return 0;
        
        if(p[b-1]=='*')
        {
            int f=solve(s,p,a,b-2);
            int r=0;
            while(1){
                if(a-r>0 && (s[a-1-r]==p[b-2] || p[b-2]=='.'))
                    r++;
                else 
                    break;
                f=f|(solve(s,p,a-r,b-2));
            }
            return f;
        }
        if(a==0 && b!=0) 
            return 0;
        if(p[b-1]=='.' || s[a-1]==p[b-1]) 
            return solve(s,p,a-1,b-1);
        return 0;
    }
};
