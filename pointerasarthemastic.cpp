#include<iostream>
using namespace std;

void process(int *arr, int n){
    //inside function we have acess to arrray same acess
     for(int i=0; i<n;i++){
        cout<<*(arr+i)<<"\n";//(arr+i)=arr[i]
     }
     arr[1]=33;//derefrenncing //updation 
     *(arr+1)=38;//derefrening 2nd time
     
}

int main(){
    int arr[3]={5,1,2};
    process(arr,3);

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    


    
    
    return 0;
};
