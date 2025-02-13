// cpp program to print the second maximum element in an  array

#include<iostream>
using namespace std;
int secondMax(int arr[], int len){
    int firstMax=arr[0];
    int secondMax=arr[0];

    //it will store the first max element in firstMax

    for(int i =0;i<len;i++){   
        if(arr[i]>firstMax){
            firstMax=arr[i];
        }
    }
    for(int i=0;i<len;i++){
        if(arr[i]>secondMax && arr[i]!=firstMax){
            secondMax=arr[i];
        }
    }
    return secondMax;
}
int main(){
    int arr[7] = {2,1,54,78,32,89,65};
    int secMax=secondMax(arr,7);
    cout<<"second maximum number in array is : "<<secMax;
    return 0;
}
