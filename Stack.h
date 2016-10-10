//
//  Stack.hpp
//  Stack
//
//  Created by Ulugbek on 08/10/16.
//  Copyright © 2016 Ulugbek. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

class Stack{
private:
    int top, counter, size;
    int* arrayOfInt;
    
public:
    Stack();
    void init(int);
    void push(int);
    int pop();
    bool isFull();
    bool isEmpty();
    int getCounter();
};

#endif /* Stack_h */
