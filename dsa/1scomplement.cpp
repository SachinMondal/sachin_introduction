#include<bits/stdc++.h>
using namespace std;
string onescomplement(string S,int N){
    for(int i=0;i<N);i++){
        if(S[i]=='0'){
            S[i]='1';
        }else{
            S[i]='0';
        }
    }
    return S;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.onescomplement(s,n)<<endl;
    }
}