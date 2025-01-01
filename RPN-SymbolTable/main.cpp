#include<iostream>

#include "symboltbl.h"
#include "stack.h"
using namespace std;

class ReversePolishNotation{
public:
    ReversePolishNotation(){

    }
    ReversePolishNotation(std::string exp){
        size = calcSize(exp);
        expression = exp;
    }
    int calcSize(std::string e){
        int count = 0;
        for (int i = 0; i <e.length() ; i++) {
            count++;
        }
        return count;
    }
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
    std::string infixToPostfix(std::string strExpression) {
        Stack<char,int> stack;

        std::string result = "";
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



// The main function that returns value of a given postfix expression
    int evaluatePostfixExpression(std::string exp,SymolTable<char,int> symbolTbl)
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
                char ch = exp[i];
                int val = symbolTbl.getValue(ch);
                stack.push(ch,val);
                // cout<<"Push -->"<<stack.getTopElement()<<"  "<<stack.getTopResult()<<endl;
            }
                // If the scanned character is an operator, pop two
                // elements from stack apply the operator
            else
            {
                int val2 = 0, val1 = 0;
                if(exp[i] >= 42 && exp[i] <= 47){
                    val2 = stack.getTopValue();
                    // cout<<exp[i]<<" Now --> 2nd Operand "<<stack.getTopElement()<<" --> "<<val2<<endl;
                    stack.pop();
                    val1 = stack.getTopValue();
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
        return stack.getTopValue();
    }
private:
    std::string expression;
    int size;

};


int main()
{
    char data[] = {'a','b','c','d','e'};
    int values [] = {11,3,4,5,6};

    SymolTable<char,int> symbolTable;
    for (int (i) = 0; (i) < 5; ++(i)) {
        symbolTable.insertValue(data[i],values[i]);
    }
    symbolTable.display();

    ReversePolishNotation reverseObject;
    std::string exp = "(((a+(b*c))-d)/e)";
    //string exp = "((3+(5/5)*4)/2)";
    //string exp = "((2+3)*5)";
    cout<<"Infix Expression is = "<<exp<<endl;
    std::string rpn = reverseObject.infixToPostfix(exp);
    cout<<"Postfix Expression  = "<<rpn<<endl;
    int result = reverseObject.evaluatePostfixExpression(rpn,symbolTable);
    cout<<"After Postfix Evaluation Result is = "<<result<<endl;

    // getch();
    return 0;
}