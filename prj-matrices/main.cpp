#include <iostream>
using namespace std;

class Matrix {

public:
        Matrix(){
            row = col = 0;
            mat = NULL;
        }
        Matrix(int row,int col){
            Matrix::row = row;
            Matrix::col = col;
            mat = NULL;
            init();
        }
        void input(int **x){
            for(int i = 0 ; i < row ; i++){
                for (int j = 0; j < col; ++j) {
                    this->mat[i][j] = x[i][j];
                }
            }
        }
        Matrix addition(Matrix m){
            Matrix result (row,col);
            if(this->row == m.row && this->col == m.col){
                for(int i = 0 ; i < row ; i++){
                    for (int j = 0; j < col; ++j) {
                        result.mat[i][j] = this->mat[i][j] + m.mat[i][j];
                    }
                    cout<<endl;
                }
            }
            else{

            }
            return result;
        }
        Matrix subtract(Matrix m){

        }
        void printMatrix(){
            for(int i = 0 ; i < row ; i++){
                for (int j = 0; j < col; ++j) {
                    cout<<mat[i][j]<<" ";
                }
                cout<<endl;
            }
        }

private:
    int row, col;
    int ** mat;

    void init(){
        mat = new int * [row];
        for(int i = 0 ; i < row ; i++){
            mat[i] =  new int [col];
        }
    }
};
void createTwoDArray(int **p,int r,int c){
    p = new int * [r];
    for(int i = 0 ; i < r; i++){
        p[i] = new int[c];
    }
}
void assignValuesTwoDArray(int **p,int s[][3], int r,int c){
    for(int i = 0 ; i < r ; i++){
        for (int j = 0; j < c; ++j) {
            p[i][j] = s[i][j];
        }
    }
}
int main() {
    /*int p = 4;
    int s = 6;
    cout<<"Before Inner Scope P = "<<p<<" , S= "<<s<<endl;
    {
        int p = 10;
        cout<<"In the Inner scope P = "<<p<<" , S= "<<s<<endl;
    }
    cout<<"After Inner Scope  P = "<<p<<" , S= "<<s<<endl;
    */
    Matrix m1(3,3);

    int **m1Array, **m2Array;
    int mtemp1[3][3] = { {1,2,3},
                           {4,5,6},
                           {7,8,9}};
    createTwoDArray(m1Array,3,3);
    assignValuesTwoDArray(m1Array, mtemp1, 3, 3);
    m1.input(m1Array);
    m1.printMatrix();
    cout<<endl<<endl;
    Matrix m2(3,3);
    int mtemp2 [3][3] = { {9,8,7},
                           {6,5,4},
                           {3,2,1}};
    createTwoDArray(m2Array,3,3);
    assignValuesTwoDArray(m2Array, mtemp2, 3, 3);
    m2.input(m2Array);
    m2.printMatrix();

    Matrix m3 = m1.addition(m2);
    m3.printMatrix();
    return 0;
}
