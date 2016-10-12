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
    Stack(); // Constructor to create an object
    void init(int); // Initializing method
    void push(int); // Pushing method
    int pop(); //Removing method
    bool isFull(); // Full stack or not
    bool isEmpty(); // Empty stack or not
    int getCounter(); // How many element contains stack
};

#endif /* Stack_h */
