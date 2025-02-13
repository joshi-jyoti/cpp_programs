//cpp program to reverse an array

#include<iostream>
using namespace std;
void reverseArr(int arr[],int len){
    int start = 0;
    int end = len-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return;
}
int main(){
    int arr[6] ={4,2,7,1,3,-1};
    reverseArr(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
