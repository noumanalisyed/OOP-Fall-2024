#include<iostream>
//#include<conio>
#include <cstring>

using namespace std;
template <class N, class P>
class Node
{
public:
    Node() = default;
    /*{
        data = 0;
        next = NULL;
    }*/
    Node(N d)
    {
        data = d;
        result = 0;
        next = NULL;
    }
    Node(N d,N r)
    {
        data = d;
        result = r;
        next = NULL;
    }
    void setData(N d)
    {
        data = d;
    }
    N getData(){
        return data;
    }
    void setResul(N r)
    {
        result = r;
    }
    N getResult(){
        return result;
    }
    void setNext(Node<N,P>* n)
    {
        next = n;
    }
    Node<N,P>* getNext(){
        return next;
    }
    void display(){
        cout<<data<<" -- "<<result<<endl;
    }
private:
    N data {0};
    P result {0};
    Node<N,P> *next {NULL};
};
template <class Type1,class Type2>
class Stack
{
public:
    Stack()
    {
        top = NULL;
        size = 0;
    }
    void push(Type1 d,Type2 r){
        Node<Type1,Type2> * n = new Node<Type1,Type2>(d,r);
        if(top == NULL){
            top = n;
        }
        else{
            n->setNext(top);
            top = n;
        }
        size++;
    }
    void pushResult(Type1 d,Type2 result){
        Node<Type1,Type2> * n = new Node<Type1,Type2>(d,result);
        if(top == NULL){
            top = n;
        }
        else{
            n->setNext(top);
            top = n;
        }
        size++;
    }
    Type1 getTopElement(){
        return top->getData();
    }
    Type2 getTopResult(){
        return top->getResult();
    }
    void pop(){
        if(!isEmpty()){
            Node<Type1,Type2> * temp = top;
            top = top->getNext();
            temp->setNext(NULL);
            delete temp;
            temp = NULL;
        }else{
            cout<<"Stack Already Empty !!!!"<<endl;
        }
        size--;
    }
    bool isEmpty(){
        return (top == NULL);
    }
    void display(){
        Node<Type1,Type2> * temp = top;
        while(temp!= NULL){
            temp->display();
            temp = temp->getNext();
        }
    }
    int getSize(){
        return size;
    }
    Node<Type1,Type2> * getTop(){
        return top;
    }
private:
    Node<Type1,Type2> * top;
    int size;
};

int prec(char c)
{
    if(c == '^')
        return 3;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}
string infixToPostfix(string strExpression) {
    Stack<char,int> stack;

    string result = "";
    int i =0;
    while(strExpression[i] != '\0'){

        if((strExpression[i] >= 'a' && strExpression[i] <= 'z')||(strExpression[i] >= 'A' && strExpression[i] <= 'Z') || (strExpression[i] >= '0' && strExpression[i] <= '9') )
        {
            result = result + strExpression[i];
        }

        else if(strExpression[i] == '('){
            stack.push('(',0);
        }
        else if(strExpression[i] == ')'){
            while(stack.getTop() != NULL && stack.getTopElement() != '(')
            {
                char c = stack.getTopElement();
                stack.pop();
                result += c;
            }
            if(stack.getTopElement() == '(')
            {
                char c = stack.getTopElement();
                stack.pop();
            }
        }
        else{
            while(stack.getTop() != NULL && (prec(strExpression[i]) <= prec(stack.getTopElement())))
            {
                char c = stack.getTopElement();
                stack.pop();
                result += c;
            }
            stack.push(strExpression[i],0);
        }
        i++;
    }
    while(stack.getTop() != NULL)
    {
        char c = stack.getTopElement();
        stack.pop();
        result += c;
    }
    return result;
}


class SymbolTableNode{
public:
    SymbolTableNode(){
        name = '\0';
        value = 0;
        next = NULL;
    }
    SymbolTableNode(char name,int value){
        SymbolTableNode::name = name;
        SymbolTableNode::value = value;
        SymbolTableNode::next = NULL;
    }

    const char &getName() const {
        return name;
    }

    void setName(const char &name) {
        SymbolTableNode::name = name;
    }

    int getValue() const {
        return value;
    }

    void setValue(int value) {
        SymbolTableNode::value = value;
    }

    SymbolTableNode *getNext() const {
        return next;
    }

    void setNext(SymbolTableNode *next) {
        SymbolTableNode::next = next;
    }

    friend ostream &operator<<(ostream &os, const SymbolTableNode &node) {
        os << "name: " << node.name << " value: " << node.value;
        return os;
    }

private:
    char name;
    int value;
    SymbolTableNode *next;
};
class SymolTable{
public:
    SymolTable(){
        count = 0;
        size = 20;
        symbolTable = new SymbolTableNode*[size];
        init();
    }
    SymolTable(string name,int value){
        count = 0;
        size = 20;
        symbolTable = new SymbolTableNode*[size];
        init();
    }

    void display(){
        for (int i = 0; i < count; ++i) {
            cout<<symbolTable[i]->getName()<<" - "<<symbolTable[i]->getValue()<<endl;
        }
    }
    void insertValue(char name,int val){
        symbolTable[count]->setName(name);
        symbolTable[count]->setValue(val);
        count++;
    }
    void deleteValue(char name){
        int i = 0;
        while(i < count) {
            if(symbolTable[i]->getName() == name) {
                symbolTable[i]->setName('\0');
                symbolTable[i]->setValue(0);
            }
            i++;
        }
        count--;
    }
    int getValue(char name){
        int index = -1;
        int i = 0;
        while(i < count) {
            if(symbolTable[i]->getName() == name) {
                index = i;
                break;
            }
            i++;
        }
        if(index != -1)
            return symbolTable[index]->getValue();
        else
            return 0;
    }

private:
    int size;
    int count;
    SymbolTableNode **symbolTable;
    void init(){
        for (int i = 0; i < size; ++i) {
            symbolTable[i] = new SymbolTableNode();
        }
    }
};

// The main function that returns value of a given postfix expression
int evaluatePostfixExpression(string exp,SymolTable symbolTbl)
{
    // Create a stack of capacity equal to expression size
    Stack<char,int> stack;
    int i;
    // See if stack was created successfully
    //if (!stack) return -1;

    // Scan all characters one by one
    for (i = 0; exp[i]; ++i)
    {
        // If the scanned character is an operand (number here),
        // push it to the stack.
        /*if (isdigit(exp[i]))
            stack.push(exp[i] - '0');*/
        if((exp[i] >= 65 && exp[i] <= 90) || (exp[i] >= 97 && exp[i] <= 122)) {
            int val = symbolTbl.getValue(exp[i]);
            char ch = exp[i];
            stack.push(ch,val);
           // cout<<"Push -->"<<stack.getTopElement()<<"  "<<stack.getTopResult()<<endl;
        }
            // If the scanned character is an operator, pop two
            // elements from stack apply the operator
        else
        {
            int val2 = 0, val1 = 0;
            if(exp[i] >= 42 && exp[i] <= 47){
                val2 = stack.getTopResult();
               // cout<<exp[i]<<" Now --> 2nd Operand "<<stack.getTopElement()<<" --> "<<val2<<endl;
                stack.pop();
                val1 = stack.getTopResult();
             //   cout<<exp[i]<<" Now --> 1st Operand "<<stack.getTopElement()<<" --> "<<val1<<endl;
                stack.pop();
            }
            /*else if(exp[i] >= 65 && exp[i] <= 90){
                val1 = symbolTbl.getValue(stack.getTopElement());
                cout<<exp[i]<<"  "<<val1<<endl;
                stack.pop();
                if(exp[i] >= 42 && exp[i] <= 47) {
                    val1 = symbolTbl.getValue(stack.getTopElement());
                    stack.pop();
                }
            }*/

            int res = 0;
            switch (exp[i])
            {
                case '+':
                    res = val1 + val2;
                    stack.push('+',res);
                    //cout<<stack.getTopElement()<<" yeilds "<<stack.getTopResult()<<endl;
                    break;
                case '-':
                    res = val1 - val2;
                    stack.push('-',res);
                    //cout<<stack.getTopElement()<<" yeilds "<<stack.getTopResult()<<endl;
                    break;
                case '*':
                    res = val1 * val2;
                    stack.push('*',res);
                    //cout<<stack.getTopElement()<<" yeilds "<<stack.getTopResult()<<endl;
                    break;
                case '/':
                    res = val1 / val2;
                    stack.push('/',res);
                   // cout<<stack.getTopElement()<<" yeilds "<<stack.getTopResult()<<endl;
                    break;
            }
        }
    }
    //stack.display();
    return stack.getTopResult();
}


int main()
{
    SymolTable symbolTable;
    symbolTable.insertValue('a',7);
    symbolTable.insertValue('b',3);
    symbolTable.insertValue('c',4);
    symbolTable.insertValue('d',5);
    symbolTable.insertValue('e',6);
    symbolTable.insertValue('f',2);
    symbolTable.display();

    string exp = "(((a+(b*c))/d)*(e+f))";
    //string exp = "((3+(5/5)*4)/2)";
    //string exp = "((2+3)*5)";
    cout<<"Infix Expression is = "<<exp<<endl;
    string rpn = infixToPostfix(exp);
    cout<<"Postfix Expression  = "<<rpn<<endl;
    int result = evaluatePostfixExpression(rpn,symbolTable);
    cout<<"After Postfix Evaluation Result is = "<<result<<endl;

   // getch();
    return 0;
}

