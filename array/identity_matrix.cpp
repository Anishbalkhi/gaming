#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 3;
    int m = 3;


    vector<vector<int>>ans(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++){
            cin>>ans[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == j && ans[i][j] == 1){
                continue;
            }else if( i != j && ans[i][j] == 0){
                continue;
            }else{
                cout<<" no identity";
                break;
            }
        }

        return 0;
    }
}