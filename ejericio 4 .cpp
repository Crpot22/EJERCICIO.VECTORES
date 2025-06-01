#include <iostream>
#include <vector>
using namespace std;

vector<int> input_vector(vector<int>& x_vector);
vector<vector<int>> input_matriz(vector<vector<int>>& x_matrix);
vector<int> dotproduct(const vector<vector<int>>& matrix, const vector<int>& vec);
void print_vector(const vector<int>& xvector);

int main() {
    vector<int> my_vector = {};
    my_vector = input_vector(my_vector);
    
    vector<vector<int>> matrix = {{}, {}, {}, {}};
    matrix = input_matriz(matrix);
    
    vector<int> resultado = dotproduct(matrix, my_vector);
    print_vector(resultado);
                        
    return 0;
}

vector<int> input_vector(vector<int>& x_vector) {
    int n;
    cout << "Introduzca 4 valores para el vector" << endl;
    for (int i = 0; i < 4; i++) {
        cin >> n;
        x_vector.push_back(n);
    }
    return x_vector;
}

vector<vector<int>> input_matriz(vector<vector<int>>& x_matrix){
    int n;
    cout << "Ingrese 16 valores para la matriz" << endl;
    for (int i = 0; i < 4; i++) {
        vector<int> row;
        for (int j = 0; j < 4; j++) {
            cin >> n;
            row.push_back(n);
        }
        x_matrix[i] = row;
    }
    return x_matrix;
}

vector<int> dotproduct(const vector<vector<int>>& matrix, const vector<int>& vec){
    vector<int> product;
    for (int i=0; i<4; i++) {
        int sum=0;
        for (int j=0; j<4; j++) {
            sum += matrix[i][j]*vec[j];
        }
        product.push_back(sum);
    }
    return product;
}

void print_vector(const vector<int>& xvector) {
    for (int element : xvector) {
        cout << element << " ";
    }
    cout << endl;
}
