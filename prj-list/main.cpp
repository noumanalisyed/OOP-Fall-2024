#include <iostream>

class Node{
public:
    Node() = default;
    Node(int data):data(data),next(NULL){
        std::cout<<"Node -- overloaded constructor called"<<std::endl;
    }
    int getData(){
        return data;
    }
    void setData(int data){
        Node::data = data;
    }
    Node* getNext(){
        return next;
    }
    void setNext(Node* next){
        Node::next = next;
    }
    void print(){
        std::cout<<data<<" ";
    }

private:
    int data {0};
    Node *next {NULL};
};

class List{
private:
    Node * head {NULL};
    int size {0};
public:
    List() = default;
    void append(int data){
        Node *n = new Node(data);
        if(head == NULL){
            head = n;
        }
        else{
            Node * temp = head ;
            while (temp->getNext() != NULL){
                temp = temp->getNext();
            }
            temp->setNext(n);
        }
        size++;
    }
    int getSize(){
        return size;
    }
    void display(){
        Node * temp = head ;
        while (temp != NULL){
            temp->print();
            temp = temp->getNext();
        }
    }
};

int main() {
    List list;
    list.append(5);
    list.append(10);
    list.append(15);
    list.append(20);
    list.display();
    list.append(25);
    list.append(30);
    list.display();

    return 0;
}
