class Solution {
private:
    int expanaroundcenter(string s,int l,int r){
        while(l>=0 && r<s.length() && s[l]==s[r]){
            l--;
            r++;
        }
        //cout<<l<<" "<<(r-l-1)<<endl;
        return r-l-1;
    }
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int st=0,ml=0;
        int i,l1,l2;
        for(i=0;i<n;i++){
            //odd length
            l1=expanaroundcenter(s,i,i);
            //even length
            l2=expanaroundcenter(s,i,i+1);
            int l=max(l1,l2);
            if(l>ml){
                ml=l;
                st=i-(l-1)/2;
            }
        }
        return s.substr(st,ml);
    }
};
