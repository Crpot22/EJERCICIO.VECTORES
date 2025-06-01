// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

vector<int> input_vector(vector<int>& x_vector);
vector<int> new_salaries(vector<int>& x_vector);
int average_salaries(vector<int>& x_vector);

int main() {
    vector<int> salaries={};
    salaries = input_vector(salaries);
    vector<int> final_salaries=new_salaries(salaries);
    int average=average_salaries(final_salaries);
    cout<<average;
    return 0;
    
}//enttrada para los vectores
vector<int> input_vector(vector<int>& x_vector){
    int n,salaries;
    cout<<"Cuantos salarios va a ingresar?"<<endl;
    cin>>n;
    for(int i = 0; i<n ; i++){
        cin>>salaries;
        x_vector.push_back(salaries);
    }
    return x_vector;
}
//sacar el minimo y maximo salario de todos los salarios 
vector<int> new_salaries(vector<int>& x_vector){
    int minsalary=x_vector[0];
    int maxsalary=x_vector[0];
    for(int i = 0 ; i< x_vector.size() ; i++){
        if (x_vector[i]<minsalary){
            minsalary=x_vector[i];
        }else if (x_vector[i]>maxsalary){
            maxsalary=x_vector[i];
        }
    }cout<<minsalary<<maxsalary<<endl;
    vector<int>new_vector;
    for(int j = 0 ; j< x_vector.size() ; j++){
        if (x_vector[j]!=minsalary && x_vector[j]!=maxsalary){
            new_vector.push_back(x_vector[j]);
        }
    }cout<<new_vector.size()<<endl;
    return new_vector;
}
//sacare el salrio promedio sin el salario maximo ni minimo
int average_salaries(vector<int>& x_vector){
    cout<<x_vector.size()<<endl;
    int sum=0,average;
    for(int i=0 ; i<x_vector.size(); i++){
        sum=sum+x_vector[i];
    }average=sum/x_vector.size();
    return average;
}
