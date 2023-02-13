//Reverse the array in alternate order

#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    for(int i=0; i<n ;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
void PrintArray(int arr[],int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    
    }
    cout<<endl;
}
int main(){
    int arr[]={12,4,5,6,65,75,23};
    int n= sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    PrintArray(arr,n);

    return 0;
}