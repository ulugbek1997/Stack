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
    Stack myStack;
    myStack.init();
    std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; i++)
        myStack.push(rand());
    std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();
    
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
    cout << "The inserting time is: " << duration << endl;
    
    
    t1 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; i++)
        myStack.pop();
    t2 = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
    cout << "The deleting time is: " << duration << endl;

    return 0;
}