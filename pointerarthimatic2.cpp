#include<iostream>
using namespace std;

int main(){
    int arr[2]={1,19};
    int *ptr=&arr[0];
    //derefrencing
    cout<<++*ptr<<"\n";

    cout<<arr[0]<<" "<<arr[1]<<"\n";
    cout<<ptr<<" "<<*ptr<<"\n";
    return 0;

}
//result
//2
//2 19
//address 2