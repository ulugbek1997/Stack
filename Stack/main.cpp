//
//  main.cpp
//  Stack
//
//  Created by Ulugbek on 08/10/16.
//  Copyright © 2016 Ulugbek. All rights reserved.
//

#include <iostream>
#include "Stack.h"
using namespace std;
int main(int argc, const char * argv[]) {
    Stack myStack;
    myStack.init();
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; i++)
        myStack.push(rand());
    auto elapsed = std::chrono::high_resolution_clock::now() - start;
    long long microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
    cout << microseconds << " microseconds" << endl;
    return 0;
}
