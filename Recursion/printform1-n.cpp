// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



    void printNos(int N)
    {
        //Your code here
        if(N==1){
        cout<<1<<" ";
        return;
        }
        printNos(N-1);
        cout<<N<<" ";
    }


// { Driver Code Starts.
/* Driver program to test printNos */
int main()
{
        int N;
        
        //input N
        cin>>N;
        printNos(N);
 
    return 0;
}
  // } Driver Code Ends