{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int size)
    {
        
        // your code here
        float c=1;
        int mi=0;
        int melm=arr[0];
        int i;
        for(i=1;i<size;i++){
            //cout<<arr[i]<<melm;
            if(arr[i]==melm){
                c++;
            }
            else{
                c--;
                if(c==0){
                    //cout<<melm;
                    melm=arr[i];
                    c++;
                //cout<<melm;
                }
            }
            
            //cout<<melm<<"-"<<c<<endl;
        }
        int x=((float)size/2);
        int count=0;
        for(i=0;i<size;i++){
            if(arr[i]==melm){
                count++;
            }
        }
        //cout<<melm<<count<<endl;
        if(count>x){
            return melm;
        }
        else{
            return -1;
        }
        return c;
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
