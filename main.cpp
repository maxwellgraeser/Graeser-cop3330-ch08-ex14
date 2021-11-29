/*
Can we declare a non-reference function argument const (e.g., void
f(const int);)? yes
What might that mean? The arguments cannot be altered in the function  
Why might we want to do that? If you have something that never changes for your function
Why don’t people do that often? Allowing to change the arguments can make the function run easier, or the variables need to be changed in the function
Try it; write a couple of small programsto see what works

Only works when we use the const variables to modify a new one, we cannot set the const variables to new values
*/

#include "header.h"

int main() {
    int a = 5, b = 10;
    const int a1 = 5, b1 = 10;
    f(a, b);
    f2(a, b);
    f2(a1, b1);
    return 0;
}