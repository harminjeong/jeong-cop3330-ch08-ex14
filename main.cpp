#include "std_lib_facilities.h"

//Yes, we can declare a non-reference function argument. This can avoid mistakenly changing const objects and prevent modifying anything unintentionally as well as giving the compiler/programmers more rules to follow.

void f(const int){
    cout << "Function call successful " << endl;
}
int multiply(const int a, const int b)
{
    return a*b;
}