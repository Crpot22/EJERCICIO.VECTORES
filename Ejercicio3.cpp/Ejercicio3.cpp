// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
void findNoodle (vector<int>& x_vector );
int main() {
    vector<int>sample={1,23, 34, 5, 6, 9, 2, 56, 432, 97};
    findNoodle(sample);
    return 0;
}
void findNoodle (vector<int>& x_vector){
    bool check=false;
    int n;
    cout<<"Que numero buscas?"<<endl;
    cin>>n;
    if(n!=-1){
    for(int i =0; i<x_vector.size() ; i++){
        if(x_vector[i]==n){
            cout<<"El numero esta en la posicion "<<i+1;
            check=true;
            break;
        }
    }if(check == false){
         cout<<"El numero no esta en el vector";
    }
    }else{
        exit(0);
    }
