// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

vector<int> input_numbs(vector<int>& x_vector);
void print_vector(vector<int>&x_vector);

int main() {
    vector<int> sample_vector ={};
    sample_vector=input_numbs(sample_vector);
    print_vector(sample_vector);
    return 0;
}
vector<int> input_numbs(vector<int>& x_vector){
    int n,numbs;
    cout<<"Cuantos numeros va a tener este vector?"<<endl;
    cin>>n;
    for(int i=1; i<n ; i++ ){
        cout<<i<<endl;
        cin>>numbs;
        x_vector.push_back(numbs);
    }return x_vector;
}
void print_vector(vector<int>& x_vector){
    for(int element: x_vector){
    }
}
