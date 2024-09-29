//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        // code here
        int count=0;
        int r,q;
        for(int i=0; i<arr.size(); i++){
            r = arr[i]%k;
            q = arr[i]/k;
            if(r==0 && q>=1){
                count = count + q;
            }
            else if(r>0 && q == 0){
                count++;
            }
            else{
                count = count + q + 1;
            }
            
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.totalCount(k, arr);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends
