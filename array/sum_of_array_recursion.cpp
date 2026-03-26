#include<iostream>
using namespace std;

int  sumArray(int arr[], int n, int i, int sum){
    if( i >= n){
        cout<<sum;
        return 0;
    }
    sum += arr[i];
    i++;
    sumArray(arr, n , i, sum );
    return 0;
}

int main(){
    int n;
    cout<<"enter the size = ";
    cin>>n;

    int arr[n];
    cout<<"enter the values = ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    sumArray(arr, n , 0, 0 );

    return 0;
}