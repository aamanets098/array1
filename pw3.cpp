#include<iostream>
#include<vector>
using namespace std;
int maxOfoncerow(vector<vector<int>>&V){
    int maxonce=INT_MIN;
    int maxofzero=-1;
    int colum=V[0].size();
    for(int i=0;i<V.size();i++){
        for(int j=0;j<V[i].size();j++){
            if(V[i][j]==1){
              int numberofrow=colum-j;
              if(numberofrow > maxonce){
                numberofrow=maxonce;
                maxofzero=i;
              }
        }
        }
    }
    return maxofzero ;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec (n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    int ans=maxOfoncerow(vec);
    cout<<ans<<endl;
    return 0;
}
