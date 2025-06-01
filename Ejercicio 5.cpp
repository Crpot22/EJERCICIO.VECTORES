// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
vector<int>inputforvector(vector<int> xvec);
int averageof(vector <int> xvec);
vector<int> aboveAverage(vector<int>xvec, int average); 

int main() {
    vector<int>Ndias={};
    Ndias=inputforvector(Ndias);
    int average= averageof(Ndias);
    vector<int> highers = aboveAverage(Ndias, average); 
    return 0;
}
vector<int>inputforvector(vector<int> xvec){
    int n,dias;
    cout<<"Cuantos dias va introducir ?"<<endl;
    cin>>n;
    for(int i=0 ; i<n; i++){
        cin>>dias;
        xvec.push_back(dias);
    }return xvec;
}
int averageof(vector <int> xvec){
    int sum=0;
    int average=0;
    for(int i =0; i<xvec.size() ; i++){
        sum = sum+xvec[i]; 
    }
    average=sum/xvec.size();
    return average;
}
vector<int> aboveAverage(vector<int>xvec,int average){
    vector<int> highers;
    int counter=0;
    for (int i=0 ; i<xvec.size();i++){
        if(xvec[i]>average){
            counter=counter+1;
            highers.push_back(xvec[i]);
        }
    }cout<<counter<<endl;
    for (int i =0; i<xvec.size();i++){
        if(xvec[i]>average){
            highers.push_back(xvec[i]);
            cout<<i<<" ";
        }
    }
    return highers;
} 
