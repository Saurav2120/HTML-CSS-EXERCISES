#include<iostream>
#include<vector>
using namespace std;

void Insertion_Sort(vector<int> &arr){
    for(int i=1;i<arr.size();i++){
        int curr_ele=arr[i];
        int j =i-1;
        while(j>=0 && arr[j]>curr_ele){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr_ele;

    }
    return;

}

int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Insertion_Sort(arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}