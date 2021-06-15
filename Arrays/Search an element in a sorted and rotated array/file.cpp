// Search an element in a sorted and rotated array

#include <iostream>
using namespace std;

void Search(int [],int,int);
int main() {
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Search(arr,key,n);
}

int BinarySearch(int arr[],int low,int high,int key){
    if(high<low)
        return -1;
    else{
    int mid=(low+high)/2;
    if(key==arr[mid])
        return mid;
    if(key>arr[mid])
        return BinarySearch(arr,(mid+1),high,key);
    return BinarySearch(arr,low,(mid-1),key);
}
}
void Search(int arr[],int key,int n){
    int pivot;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            pivot=i;
            break;
        }
    }
    if(key>arr[0]){
        cout<<BinarySearch(arr,0,pivot,key);
    }
    else{
        cout<<BinarySearch(arr,pivot+1,n-1,key);
    }
}