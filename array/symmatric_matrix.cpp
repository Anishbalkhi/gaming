#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 3;
    int m = 3;

    vector<vector<int>>ans(n, vector<int>(m));
    cout<<"enter the values = ";
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m; j++){
            cin>>ans[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = i; j < m ; j++){
            if(ans[i][j] != ans[j][i]){
                cout<<"matrix is not symmatric";
                return 0;
            }
        }
    }
return 0;
}