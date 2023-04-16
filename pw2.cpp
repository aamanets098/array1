#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void rotate(vector<vector<int>>&mat){
    for(int i=0;i<mat.size();i++){
        for(int j=i;j<mat[0].size();j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i=0;i<mat.size();i++){
        reverse(mat[i].begin(),mat[i].end());
    }
    return ;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>mat(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>mat[i][j];
        }
    }
    rotate(mat);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}
