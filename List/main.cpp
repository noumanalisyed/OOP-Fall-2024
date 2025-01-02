#include <iostream>
template <class Type>
class Node{
public:
    Node() = default;
    Node(Type data):data(data){

    }
    void setData(Type data){
        Node<Type>::data = data;
    }
    Type getData(){
        return data;
    }
    void setNext(Node<Type>* next){
        Node<Type>::next = next;
    }
    Node<Type>* getNext(){
        return next;
    }
    void print(){
        std::cout<<data<<"  "<<next<<"  ,  ";
    }
private:
    Type data {0};
    Node<Type> * next {NULL};
};

template <class MyType>
class List{
public:
    List() = default;
    void insert(MyType data){
        Node<MyType> * n = new Node<MyType>(data);
        if(head == NULL){
            head = n;
        }
        else{
            Node<MyType> * temp = head;
            while (temp->getNext() != NULL){
                temp = temp->getNext();
            }
            temp->setNext(n);
        }
    }
    void displayList(){
        Node<MyType> * temp = head;
        while (temp != NULL){
            temp->print();
            temp = temp->getNext();
        }
        std::cout<<std::endl;
    }
private:
    Node<MyType> * head {NULL};
};
int main() {
    List<int> integerList;
    integerList.insert(10);
    integerList.insert(20);
    integerList.insert(30);
    integerList.insert(40);
    integerList.displayList();
    List<float> floatList;
    floatList.insert(10.5);
    floatList.insert(20.3);
    floatList.insert(30.7);
    floatList.insert(40.8);
    floatList.displayList();
    List<std::string> stringList;
    stringList.insert("ABC");
    stringList.insert("DEF");
    stringList.insert("GHI");
    stringList.insert("JKL");
    stringList.displayList();
    return 0;
}