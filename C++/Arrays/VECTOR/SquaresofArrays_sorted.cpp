//given a vector arr[] sorted in increasing order.
//Return an array of squares of each number sorted in increasing order.Where size of vector 1<size<101
#include<iostream>
#include<vector>
using namespace std;

vector<int> Square_of_array(vector<int>& nums) {
        int n = nums.size();
        int left_ptr = 0;
        int right_ptr = n-1;
        int k = n-1;
        vector<int> square(k);
        while(left_ptr<=right_ptr){
            if(abs(nums[left_ptr]) < abs(nums[right_ptr])){
                square[k]=(nums[right_ptr]*nums[right_ptr]);
                right_ptr--;
                k--;
            }
            else{
                square[k]= (nums[left_ptr]*nums[left_ptr]);
                left_ptr++;
                k--;
            }
        }
        return square;
}

/*vector<int> Square_of_array(vector<int> &v){

    int left_ptr =0;
    int right_ptr = v.size()-1;
    int k=v.size()-1;
    vector<int> square(k);
    while(left_ptr<right_ptr){
        if(abs(v[left_ptr]) < abs(v[right_ptr])){
            square[k] = (v[right_ptr]*v[right_ptr]);
            right_ptr--;
            k--;
        }
        else{
            square[k] = v[left_ptr]*v[left_ptr];
            left_ptr++;
            k--;
        }
    }
    return square;
    
}*/
int main(){
    int n;
    cout<<" enter Size :";
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];

    }
    vector<int> result = Square_of_array(nums);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}