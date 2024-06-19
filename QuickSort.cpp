#include<iostream>
using namespace std;


int partition(int arr[],int first, int last){
    int pivot=arr[last];
    int i=first-1;//for inserting element<pivot
    int j=first;///for finding element<pivot

    for(; j<last;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    //Now i is pointing for pivot will  be ===> i+1
    //Correct position for pivot wil be  ====> i+1

    swap(arr[i+1],arr[j]);
    return i+1;
}

void quickSort(int arr[],int first, int last){
    //base case
    if(first>=last){
        return;
    }

    int pi=partition(arr,first,last);
    quickSort(arr,first,pi-1);
    quickSort(arr,pi+1,last);
}

int main(){
    int arr[]={10,23,8,45,24,26,96,100};
    int n=sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }return 0;
}