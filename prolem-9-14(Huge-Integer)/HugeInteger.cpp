//
// Created by Syed Nouman Ali Shah on 24/10/2024.
//

#include "HugeInteger.h"
HugeInteger::HugeInteger(int s){
    size = s;
    capacity = 0;
    init();
}
HugeInteger::HugeInteger(int s, string data){
    size = s;
    capacity = data.length();
    init();
    int length = data.length();
    for (int i = length - 1, j = size - 1; i >= 0 ; i-- , j-- ) {
        digits[j] = data[i] - 48;
    }
}
void HugeInteger::init(){
    for (int i = 0; i < size; ++i) {
        digits[i] = 0;
    }
}
void HugeInteger::input(string data){
    int length = data.length();
    for (int i = length - 1, j = size - 1; i >= 0 ; i-- , j-- ) {
        digits[j] = data[i] - 48;
    }
    capacity = length;
}
void HugeInteger::display(){
    for (int i = 0; i < size; ++i) {
        //if(digits[i]!= 0) {
            cout << digits[i] << " ";
        //}
    }
    cout<<endl;
}

HugeInteger HugeInteger::add(HugeInteger h){
    HugeInteger result;
    int carry = 0, remainder =0, quotient =0;
    for (int i = size-1; i > 0 ; i--) {
        int n = digits[i] + h.digits[i] + carry;
        if(n >= 10){
            remainder = n % 10;
            quotient = n / 10;
            result.digits[i] = remainder;
            carry = quotient;
        }
        else{
            result.digits[i] = n;
            carry = 0;
        }
    }
    return result;
}
