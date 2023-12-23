#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;//vector<datatype> name;

    //size & capacity:-
    cout<<"Size of : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;

    //Adding value from end we use push_back:-
    v.push_back(1);
    cout<<"Size of : "<<v.size()<<endl;
    cout<<"Capacity :"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size of : "<<v.size()<<endl;
    cout<<"Capacity :"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size of : "<<v.size()<<endl;
    cout<<"Capacity :"<<v.capacity()<<endl;

    //resizing the array using resize:-
    v.resize(5);
    cout<<"Size of : "<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.resize(10);
    cout<<"Size of : "<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;

    //To delete the element from end we use pop_back:-
    v.pop_back();
    v.pop_back();
    cout<<"Size of : "<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;


    return 0;

}
