//
//  main.cpp
//  TriangularNumbers
//
//  Created by Asher Abrams on 2018/02/01.
//  Copyright © 2018 Asher Abrams. All rights reserved.
//  Last update 2018-12-03.
//
//  PREPROCESSOR
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// DECLARATIONS
int i, sum;
int func01(int);

// FUNCTIONS
int func01(int i)
{
    for (i = 1; i <= 20; i++)
    {
        sum = sum + i;
        cout << sum << '\n';
    }
    return sum;
}

// MAIN
int main(int argc, const char * argv[]) {
    func01(i);
    return 0;
}
