// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

void print_board (vector<vector<char>>& board);


int main() {
    vector<vector<char>> board ={{'x','0','0','0','1','1','1','1'},
                                {'0','0','0','0','0','1','1','1'},
                                {'1','1','0','1','1','0','0','0'},
                                {'1','0','0','0','0','0','0','0'}};
    
    print_board(board);

    return 0;
}
void print_board (vector<vector<char>>& board){
    for(vector<char> row:board){
        for(char element:row){
            cout<<element<<" ";
        }
        cout<<endl;
    }
}
