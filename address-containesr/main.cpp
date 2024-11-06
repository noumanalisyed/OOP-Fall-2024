#include <iostream>
using namespace std;
int main() {

    int *ptr = 0;

    cout<<"Address of my pointer = "<<&ptr<<endl;
    cout<<"Value of my pointer = "<<ptr<<endl;
    int x = 5;
    cout<<"Address of my variable x = "<<&x<<endl;
    cout<<"Dircet access of Value of my variable x = "<<x<<endl;

    ptr = &x;
    cout<<"Content of Ptr = "<<ptr<<endl;
    cout<<"In Dircet access of Value of my variable x = "<<*ptr<<endl;

    int * sptr;

    sptr = new int[5];

    for(int i = 0; i < 5; i++){
        cout<<"Enter Value at X[ "<<i<<"] = ";
        cin>>sptr[i];
    }
    for(int i = 0; i < 5; i++){
        cout<<" X[ "<<i<<"] = "<<sptr[i]<<endl;
    }

    int ** dblPtr;
    dblPtr = new int * [2];
    for(int i =0 ; i < 2; i++){
        dblPtr[i] = new int[3];
    }



    return 0;
}
