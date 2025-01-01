#include <iostream>
#include <string>
using namespace std;


class DynamicArray{
private:

    int *arr;
    int count=0;
    static int size;
public:
    DynamicArray(){
        size = 5;
        arr = new int[size];
    }

    void addValues(int value){

        if(count<size){
            arr[count] = value;
            count++;
        }else{
            size += 5;
            int *ptr = new int[size];
            for(int i=0;i<count;i++){
                ptr[i] = arr[i];
            }
            delete [] arr;
            arr = ptr;
            ptr = nullptr;
            arr[count] = value;
            count++;
        }
    }

    int getSize(){
        return size;
    }

    void display(){
        for(int i=0;i<count;i++){
            cout << arr[i] << endl;
        }
    }
};

int DynamicArray::size;

int main()
{
    DynamicArray arr1;

    bool flag = false;
    int x;
    char choice;
    do{
        cout << "Enter Integer: ";
        cin >> x;
        arr1.addValues(x);
        cout << "Enter a to add and x to exit: ";
        cin >> choice;

        if(choice == 'x'){
            flag = true;
        }

    }while(flag==false);

    arr1.display();
    cout << arr1.getSize();



    cout << endl;
    return 0;
}
