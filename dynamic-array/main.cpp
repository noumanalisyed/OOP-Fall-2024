#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int x[size] = {1,2,3,4,5};
    for (int i = 0; i < size; ++i) {
        cout<<x[i]<<" ,  ";
    }
    cout<<endl;
    int * ptr;
    ptr = new int [size];

    /*for (int i = 0; i < size; ++i) {
        cout<<"Enter Values at ptr["<<i<<"] = ";
        cin>>ptr[i];
    }
    for (int i = 0; i < size; ++i) {
        cout<<ptr[i]<<" ,  ";
    }*/

    const int row = 3;
    const int col = 3;
    int p[row][col] = {{1,2,3},
                       {4,5,6},
                       {7,8,9}};

    for(int k =0; k < row; k++){
        for (int m = 0; m < col; ++m) {
            cout<<p[k][m]<<" ,  ";
        }
        cout<<endl;
    }

    int **sptr;

    sptr = new int *[row];

    for (int i = 0; i < row; ++i) {
        sptr[i] = new int[col];
    }

    for(int k =0; k < row; k++){
        for (int m = 0; m < col; ++m) {
            cout<<"Enter value at SPTR ["<<k<<"]["<<m<<"] = ";
            cin>>sptr[k][m];
        }
        cout<<endl;
    }

    for(int k =0; k < row; k++){
        for (int m = 0; m < col; ++m) {
            cout<<sptr[k][m]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
