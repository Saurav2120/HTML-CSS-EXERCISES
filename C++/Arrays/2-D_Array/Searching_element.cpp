#include<iostream>
using namespace std;
int main(){
    int row,col;
    cin>> row>> col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int x;
    cout<<" Element to Search : ";
    cin>>x;
    int r,c;
    bool flag = false;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==x){
            r=i;
            c=j;
            flag = true;
            }

        }
    }
    if(flag){
        cout<<"Element Found at ";
        cout<<"Row = "<<r<<" Column = "<<c;
    }
    else{
        cout<<"Element Not Found";
    }
    
}