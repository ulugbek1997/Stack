//
//  Stack.cpp
//  Stack
//
//  Created by Ulugbek on 08/10/16.
//  Copyright © 2016 Ulugbek. All rights reserved.
//

#include "Stack.h"
#include <iostream>

Stack::Stack(){
    std::cout<<"The stack has created"<<std::endl;
}

void Stack::init(int size){
    this->size = size;
    top = -1;
    counter = 0;
    arrayOfInt = new int[size];
    std::cout<<"The stack has initialized"<<std::endl;
}

void Stack::push(int element){
    if(isFull()){
        std::cout<<"The stack is full"<<std::endl;
        exit(1);
    }
    else
        arrayOfInt[++top] = element;
    counter++;
}

int Stack::pop(){
    if (isEmpty()){
        std::cout<<"The stack is empty"<<std::endl;
        exit(1);
    }
    else{
        counter--;
        return arrayOfInt[top--];
    }
}

bool Stack::isFull(){
    if (counter == size)
        return true;
    else
        return false;
}

bool Stack::isEmpty(){
    if (top == -1)
        return true;
    else
        return false;
}

int Stack::getCounter(){
    return counter;
}








