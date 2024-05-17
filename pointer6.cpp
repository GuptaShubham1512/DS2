#include<iostream>
using namespace std;

int main(){
    int arr[2]={1,19};
    int *ptr=&arr[0];
    //derefrencing
    cout<<*ptr++<<"\n";

    cout<<arr[0]<<" "<<arr[1]<<"\n";
    cout<<ptr<<" "<<*ptr<<"\n";
    return 0;

}

//result 
//1
//1 19
//0x61ff08  19