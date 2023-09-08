//Smallest window in a string containing all the characters of another string
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
        int i;
        vector<int> c1(26,0);
        vector<int> c2(26,0);
        for(i=0;i<p.length();i++){
            int k=p[i]-'a';
            c1[k]++;
        }
        int need=0;
        for(i=0;i<26;i++){
            if(c1[i]!=0){
                need++;
            }
        }
        int j=0,si=0,len=INT_MAX;
        int have=0;
        for(i=0;i<s.length();i++){
            int k=s[i]-'a';
            c2[k]++;
            //cout<<cmp(c1,c2);
            if(c2[k]==c1[k]){
                have++;
            }
            while(need==have){
                if(len>i-j+1){
                    len=i-j+1;
                    si=j;
                }
                int k=s[j]-'a';
                c2[k]--;
                if(c1[k]>c2[k]){
                    have--;
                }
                j++;
            }
        }
        if(len==INT_MAX){
            return "-1";
        }
        return s.substr(si,len);
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
