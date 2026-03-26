#include<iostream>
using namespace std;


void printarray(int arr[], int n, int i){
    if( i >= n){
        return ;
    }
     cout<<arr[i]<<" "
    i++;
    printarray(arr, n, i);

}
int main(){
    int n;
    cout<<"enter the size = ";
    cin>>n;
    int arr[n];
    cout<<"enter the values =";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    printarray(arr, n , 0);

    return 0;
}
