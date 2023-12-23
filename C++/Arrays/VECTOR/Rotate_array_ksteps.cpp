//Rotate the given array 'a' by k steps, where k is non-negative. 
//note: k can be greater than n as well where n is the size of array 'a'

/*#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v{1,2,3,4,5,6,7};
    int k;
    cin>>k;
    k = k % v.size();
    int temp[k];
    for(int i =0;i<k;i++){
        temp[i] = v[i];
    }
    for(int i=k;i<v.size();i++){
        v[i-k]=v[i];
    }
    for(int i = v.size()-k;i<v.size();i++){
        v[i]=temp[i-(v.size()-k)];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}*/

//Another way using function:

#include <iostream>
#include <vector>
using namespace std;

// Function to left rotate a vector by k places
void leftRotate(vector<int>& vec, int k) {
    int n = vec.size();
    k=k%n;
    
    // Create a temporary vector
    vector<int> temp(k);
    
    // Copy the first k elements to temp
    for (int i = 0; i < k; i++) {
        temp[i] = vec[i];
    }
    
    // Shift the remaining elements to the left
    for (int i = k; i < n; i++) {
        vec[i - k] = vec[i];
    }
    
    // Copy elements from temp back to the vector
    for (int i = n-k; i < n; i++) {
        vec[i] = temp[i-(n-k)];
    }
}

int main() {
    int n, k;
    cout << "Enter the size of the vector: ";
    cin >> n;
    
    vector<int> vec(n);
    
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    cout << "Enter the number of positions to left rotate: ";
    cin >> k;
    
    // Perform left rotation
    leftRotate(vec, k);
    
    // Display the rotated vector
    cout << "Rotated vector: ";
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    
    return 0;
}