#include<iostream>
#include<vector>
using namespace std;

void CountSort(vector<int> &v){
    int n=v.size();
    //Find Max element
    int max_ele = INT_MIN;
    for(int i=0; i<n; i++){
        max_ele=max(v[i],max_ele);

    }
    ///Create the frequency array
    vector<int> freq(max_ele+1,0);
    for(int i=0; i<n; i++){
        freq[v[i]]++;
    }

    //Calculate the commulative frequency
    for(int i=1; i<max_ele; i++){
        freq[i]+=freq[i+1];
    }

    //calculate the sorted array
    vector<int> ans(n);
    for(int i=n-1; i>=0; i--){
        ans[--freq[v[i]]=v[i]];
    }

    //Copy back to the  original array
    for(int i=0;i<n;i++){
        v[i]=ans[i];
    }






}



int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];

    }
    CountSort(a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";


    }
    cout<<endl;
}