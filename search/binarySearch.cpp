#include<iostream>
using namespace std;

int binarysrch(int arr[],int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;

    while(start<=end){
        
        if(arr[mid] == key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    
        mid = start + (end-start)/2;
    }
    return -1;
}   

int main(){
    int arr[6] = {2,4,6,8,10,12};
    int size = 6;
    int key = 4;
    int index = binarysrch(arr,size,key);
    cout<< "Located at index : " << index;
    return 0;

}