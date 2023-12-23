#include<iostream>
#include<vector>
using namespace std;

vector<int> generateRow(int row){
    vector<int> ansRow;
    ansRow.push_back(1);
    long long ans =1;
    for(int col=1;col<=row;col++){
        ans=ans*(row-col);
        ans = ans/col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> generatePascalTriangle(int rows){
    vector<vector<int>> result;
    for(int i=1;i<=rows;i++){
        result.push_back(generateRow(i));
    }
    return result;
}
int main(){
    int rows;
    cout<<" Enter the no. of rows : ";
    cin>>rows;
    vector<vector<int>> PascalTriangle = generatePascalTriangle(rows);
    for(int i=0;i<rows;i++){
        for(int j =0;j<rows-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<PascalTriangle[i][j]<<" ";
        }
        cout<<endl;
    }

}