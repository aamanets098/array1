/*Q1 - Given a 2D matrix with m rows and n columns containing integers,
find and print the maximum value present in the array.*/
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int A[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    int max=A[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]>max){
                max=A[i][j];
            }
        }
    }
    cout<<max<<endl;
    return 0;

}