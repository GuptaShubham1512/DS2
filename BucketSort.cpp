#include<iostream>
#include<vector>
using namespace std;

void bucketSort(int arr[],int size);
vector<vector<float>> bucket( int size,vector<float>());
//step1

//step2: insserting elements in buvket
for(int i=0; i<size; i++){
    int index=arr[i]*size;
    bucket[index].pushback(arr[i]);

}

//step3: Sorting individual buckets
for(int i=0; i<size; i++){
    if(!bucket[i].empty()){
        sort(bucket[i].begin(),bucket[i.end());

    }
}

//step 4: cobining elements from the bucket
int k=0;
for(int i=0; i<size;i++){
    for(int j=0; j<bucket[i].size; j++){
        arr[k++]=bucket[i][j];
    }
}

int main(){
    float arr[]={0.13,0.45,0.12,0.89,0.75,0.63,0.85,0.39};

    int size=sizeof(arr)/sizeof(arr[0]);
    bucketSort(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
        return 0;

    }
    
    
}
