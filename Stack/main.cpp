//
//  main.cpp
//  Stack
//
//  Created by Ulugbek on 08/10/16.
//  Copyright © 2016 Ulugbek. All rights reserved.
//

#include <iostream>
#include <chrono>
#include "Stack.h"
using namespace std;
int main(int argc, const char * argv[]) {
    cout<<"Enter the size of stack: ";
    int size = 0;
    cin >> size; // Entering the size of stack 10, 100, 1000, 10000....
    Stack myStack; //Creating Stack object
    myStack.init(size); // Initializing stack
    std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now(); // Beginning time
    for (int i = 0; i < size; i++)
        myStack.push(rand()); // Pushing random numbers
    std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now(); // Ending time
    
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count(); // Calculating time execution
    cout << "The inserting time is: " << duration / (double) 1000 << " ms"<<endl;
    t1 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < size; i++)
        myStack.pop(); // Removing pushed numbers
    t2 = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count(); // Calculating time execution
    cout << "The deleting time is: " << duration / (double) 1000 <<" ms"<<endl;
    return 0;
}