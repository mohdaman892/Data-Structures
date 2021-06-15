// Rotation 1 left

#include <iostream>
using namespace std;
void rotate(int [],int,int);

int main() {
    int n; //length of array
    cin>>n;
    int d;
    cin>>d; //rotation amount
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotate(arr,d,n); //function call
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//one-by-one rotate O(n*d)
void rotate(int arr[],int d,int n){
    while(d>0){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    d--;}
}

//
