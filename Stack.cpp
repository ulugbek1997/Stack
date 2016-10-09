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

void Stack::init(){
    top = -1;
    counter = 0;
    arrayOfInt = new int[counter];
    std::cout<<"The stack has initialized"<<std::endl;
}

void Stack::push(int element){
    if (isFull()){
        int *tempArray = new int[counter + 1];
        for (int i = 0; i < counter; i++){
            tempArray[i] = pop();
        }
        delete [] arrayOfInt;
        arrayOfInt = new int[counter+1];
        for (int i = 0; i < counter; i++){
            arrayOfInt[i] = pop();
        }
        
        arrayOfInt[++top] = element;
    }
    
    else{
        arrayOfInt[++top] = element;
    }
    counter++;
}

int Stack::pop(){
    if(isEmpty()){
        std::cout<<"The stack is empty"<<std::endl;
        exit(1);
    }
    else{
        counter--;
        return arrayOfInt[top--];
    }
}

bool Stack::isFull(){
    if (counter == (top))
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

void Stack::show(){
    for (int i = 0; i < counter; i++)
        std::cout<<arrayOfInt[i]<<" ";
}










