#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter length of array";
    cin>>n;
    vector<int> num_array(n);

    cout<<"Array before insertion\n";

    for(int i = 0; i<n; i++){
        cout<<"num_array["<<i<<"] = "<<num_array[i]<<"\n";
    }

    cout<<"Undergoing insertion operation\n";
    for(int i =0; i< n; i++){
        cout<<"num_array["<<i<<"] = ";
        cin>>num_array[i];
        
    }
    cout<<"Array after insertion\n";
    for(int i = 0; i<n; i++){
        cout<<"num_array["<<i<<"] = "<<num_array[i]<<"\n";
    }

    return 0;
}