//WAP to display transpose of matrix entered by the user.
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<" Enter the size of matrix : ";
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
    int transpose[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            transpose[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<transpose[i][j]<<' ';
        }
        cout<<endl;
    }
    

    return 0;

}