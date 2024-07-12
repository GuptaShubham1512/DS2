#include<iostream>
#include<vector>
using namespace std;


//BUBBLE SORT ALGORITHM

//pass = n-1

// void bubbleSort(vector<int> &v){
    // int n=v.size();
    // for(int i=0; i<n-1; i++){
        // for(int j=0; j<n-(i+1); j++){
            // if(v[j]>v[j+1]){
                // swap(v[j],v[j+1]);
            // }
        // }
    // }return;
// }

// int main(){
    // int n;
    // cin>>n;
    // vector<int> v(n);
    // for(int i=0; i<n; i++){
        // cin>>v[i];
    // }
    // bubbleSort(v);
    // for(int i=0; i<n; i++){
        // cout<<v[i]<<"  ";
    // }
    //  cout<<endl;
// }


//SELECTION SORT ARRAY

void SelectionSort(vector <int> &v){
    int n=v.size();
    
    for(int i=0; i<n-1; i++){
        int ans=INT_MIN;
        for(j=0; j<n; j++){

        }


    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];


    }
    SelectionSort(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<endl;


    }
}
