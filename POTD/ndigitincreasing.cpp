/*

Given an integer N, print all the N digit numbers in increasing order, such that their digits are in strictly increasing order(from left to right).

Example 1:

Input:
N = 1
Output:
0 1 2 3 4 5 6 7 8 9
Explanation:
Single digit numbers are considered to be 
strictly increasing order.
Example 2:

Input:
N = 2
Output:
12 13 14 15 16 17 18 19 23....79 89
Explanation:
For N = 2, the correct sequence is
12 13 14 15 16 17 18 19 23 and so on 
up to 89.
Your Task:  
You don't need to read input or print anything. Your task is to complete the function increasingNumbers() which takes an integer N as an input parameter and return the list of numbers such that their digits are in strictly increasing order.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 <= N <= 9


*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> increasingNumbers(int N){
        if(N==1){
            return {0,1,2,3,4,5,6,7,8,9};
        }   
        vector<int> prev=increasingNumbers(N-1),ans;
        for(int i=0;i<prev.size();i++){
            int lastdigit=prev[i]%10;
            if(lastdigit==0){
                continue;
            }
            for(int newdigit=lastdigit;newdigit<9;newdigit++){
                ans.push_back(prev[i]*10+(newdigit+1));
            }
        }
        return ans;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        Solution ob;
        vector<int> ans=ob.increasingNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        } 
        cout<<endl;
    }
    return 0;
}

