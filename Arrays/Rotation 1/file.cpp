// Rotation 1 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void rotate(int [],int,int);
void rotate2(int [],int,int);
void rotate3(int [],int,int);
void reverseArray(int [],int,int);
int gcd(int a,int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main() {
    int n; //length of array
    cin>>n;
    int d;
    cin>>d; //rotation amount
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //rotate(arr,d,n); //function call
    //rotate2(arr,d,n);
    rotate3(arr,d,n);
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

//juggling algorithm O(n) and O(1) best algo
void rotate2(int arr[],int d,int n){
    d=d%n;
    int Gcd=gcd(d,n);
    for(int i=0;i<Gcd;i++){
        int temp=arr[i];
        int j=i;
        while(1){
            int k=j+d;
            if(k>=n)
                k=k-n;
            if(k==i)
                break;

            arr[j]=arr[k];
            j=k;

        }
        arr[j]=temp;
    } 
}

//Reversal algo ArB=>ArBr=>{ArBr}r=>BA

void reverseArray(int arr[],int l,int r){
    while(l<r){
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;
    }
}

void rotate3(int arr[],int d,int n){
    d=d%n;
    reverseArray(arr,0,d-1);
    reverseArray(arr,d,n-1);
    reverseArray(arr,0,n-1);
}



//Block Swap Algorithm

//cyclic rotation=1 right rotation