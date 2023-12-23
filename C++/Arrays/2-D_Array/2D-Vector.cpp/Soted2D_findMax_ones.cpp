#include<iostream>
#include<vector>
using namespace std;

int Max_ones_row(vector<vector<int>> &vec){
    int row = vec.size();
    //row=0;
    int col = vec[0].size();
    //col= col-1;
    int max_row =-2;
    int max_one = 0;
    int cols = col-1;
    int ans_row =0;
    while(cols>=0 && ans_row<row){
        if(vec[ans_row][cols]==1){
            cols--;
            max_one++;
            max_row = ans_row;

        }
        else{
            ans_row++;
           
        }

    }
    max_row = max_row+1;
    return max_row;
    
}
int main(){
    int row,col;

    cin>>row>>col;
    vector<vector<int>> vec(row,vector<int> (col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>vec[i][j];
        }
    }
    int result = Max_ones_row(vec);
    cout<<"Row having maximum no. of one's is : "<<result;
    return 0;




}